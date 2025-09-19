// pubg_demo.cpp
// ‰„Ê–Ã  ⁄·Ì„Ì „»”ÿ ·„Õ«ﬂ«… »« · —ÊÌ«· (C++17)
// Compile: g++ -std=c++17 -O2 pubg_demo.cpp -o pubg_demo

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>
#include <iomanip>

using namespace std;
using Clock = chrono::steady_clock;
std::mt19937 rng((unsigned)Clock::now().time_since_epoch().count());

struct Vec2 {
    double x, y;
    double dist_to(const Vec2& o) const {
        double dx = x - o.x, dy = y - o.y;
        return sqrt(dx * dx + dy * dy);
    }
};

struct Weapon {
    string name;
    int damage;
    int range; // effective range units
    double accuracy; // 0..1
};

struct Player {
    string name;
    Vec2 pos;
    int hp;
    bool alive = true;
    Weapon w;
};

double rand_double(double a = 0.0, double b = 1.0) {
    uniform_real_distribution<double> dist(a, b);
    return dist(rng);
}
int rand_int(int a, int b) {
    uniform_int_distribution<int> dist(a, b);
    return dist(rng);
}

vector<Weapon> default_weapons() {
    return {
        {"Assault Rifle", 30, 40, 0.7},
        {"SMG", 18, 20, 0.8},
        {"Sniper", 80, 200, 0.95},
        {"Pistol", 12, 15, 0.6}
    };
}

void print_status(const vector<Player>& players, const Vec2& zone_center, double zone_radius, int tick) {
    cout << "=== Tick " << tick << " | Zone center ("
        << fixed << setprecision(1) << zone_center.x << "," << zone_center.y
        << ") radius " << zone_radius << " ===\n";
    for (const auto& p : players) {
        cout << p.name << (p.alive ? " [ALIVE] " : " [DEAD]  ")
            << "HP: " << setw(3) << p.hp
            << " Pos: (" << fixed << setprecision(1) << p.pos.x << "," << p.pos.y << ")"
            << " Weapon: " << p.w.name << "\n";
    }
    cout << "\n";
}

void move_player(Player& p, double world_size) {
    if (!p.alive) return;
    // random small move towards center (for demo)
    double dx = rand_double(-5, 5);
    double dy = rand_double(-5, 5);
    p.pos.x = min(max(0.0, p.pos.x + dx), world_size);
    p.pos.y = min(max(0.0, p.pos.y + dy), world_size);
}

void try_shoot(Player& shooter, vector<Player>& players) {
    if (!shooter.alive) return;
    // choose a target at random among alive players excluding shooter
    vector<int> candidates;
    for (int i = 0;i < (int)players.size();++i) {
        if (players[i].name != shooter.name && players[i].alive) candidates.push_back(i);
    }
    if (candidates.empty()) return;
    int idx = candidates[rand_int(0, (int)candidates.size() - 1)];
    Player& target = players[idx];
    double dist = shooter.pos.dist_to(target.pos);
    double effective = shooter.w.accuracy * (dist <= shooter.w.range ? 1.0 : 0.5); // less accurate beyond range
    double roll = rand_double();
    if (roll < effective) {
        // hit
        int dmg = shooter.w.damage;
        target.hp -= dmg;
        cout << shooter.name << " hit " << target.name << " with " << shooter.w.name
            << " for " << dmg << " dmg (dist " << (int)dist << ")\n";
        if (target.hp <= 0) {
            target.alive = false;
            target.hp = 0;
            cout << ">>> " << target.name << " was eliminated by " << shooter.name << "!\n";
        }
    }
    else {
        cout << shooter.name << " missed " << target.name << " (" << shooter.w.name << ")\n";
    }
}

void apply_zone_damage(Player& p, const Vec2& zone_center, double zone_radius) {
    if (!p.alive) return;
    double d = p.pos.dist_to(zone_center);
    if (d > zone_radius) {
        // outside zone -> take damage
        int dmg = 5; // per tick
        p.hp -= dmg;
        cout << p.name << " takes " << dmg << " zone damage (dist " << (int)d << ")\n";
        if (p.hp <= 0) { p.alive = false; p.hp = 0; cout << ">>> " << p.name << " died to the zone.\n"; }
    }
}

int main() {
    const double WORLD = 300.0;
    const int MAX_TICKS = 60;
    vector<Weapon> pool = default_weapons();
    vector<Player> players;

    // spawn sample players
    int N = 6;
    for (int i = 1;i <= N;i++) {
        Player p;
        p.name = "Player" + to_string(i);
        p.pos = { rand_double(0, WORLD), rand_double(0, WORLD) };
        p.hp = 100;
        p.w = pool[rand_int(0, (int)pool.size() - 1)];
        players.push_back(p);
    }

    Vec2 zone_center = { WORLD / 2, WORLD / 2 };
    double zone_radius = WORLD * 0.6;

    for (int tick = 1; tick <= MAX_TICKS; ++tick) {
        print_status(players, zone_center, zone_radius, tick);

        // each alive player moves
        for (auto& p : players) move_player(p, WORLD);

        // combat phase: each alive player has chance to shoot
        for (auto& p : players) {
            if (p.alive && rand_double() < 0.6) { // 60% chance to engage
                try_shoot(p, players);
            }
        }

        // zone damage
        for (auto& p : players) apply_zone_damage(p, zone_center, zone_radius);

        // shrink zone gradually every 10 ticks
        if (tick % 10 == 0) {
            zone_radius *= 0.7;
            cout << "*** Zone shrank! new radius: " << fixed << setprecision(1) << zone_radius << "\n";
        }

        // check alive count
        int alive = 0;
        string lastName;
        for (auto& p : players) if (p.alive) { alive++; lastName = p.name; }
        if (alive <= 1) {
            cout << "\n=== Match ended at tick " << tick << " ===\n";
            if (alive == 1) cout << "Winner: " << lastName << "\n";
            else cout << "No winners (all dead).\n";
            break;
        }

        // small delay for readability
        this_thread::sleep_for(chrono::milliseconds(400));
    }

    cout << "\nFinal standings:\n";
    sort(players.begin(), players.end(), [](const Player& a, const Player& b) {
        if (a.alive != b.alive) return a.alive > b.alive;
        return a.hp > b.hp;
        });
    for (const auto& p : players) {
        cout << (p.alive ? "[ALIVE]  " : "[DEAD]  ") << p.name << " HP:" << p.hp
            << " Weapon:" << p.w.name << "\n";
    }
    return 0;
}
