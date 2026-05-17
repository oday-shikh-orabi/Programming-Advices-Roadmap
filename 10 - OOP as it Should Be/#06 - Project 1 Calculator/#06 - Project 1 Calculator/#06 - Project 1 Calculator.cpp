#include <iostream>
using namespace std;

class clsCalculater
{
private:
	short _OpretorIndex = 0;
	int _Result = 0;
	int _LastNum= 0;

	string Opretor()
	{
		switch (_OpretorIndex)
		{
			case 0:
			{
				return "Clear ";
			}
			case 1:
			{
				return "Adding ";
			}
			case 2:
			{
				return "Subtruct ";
			}
			case 3:
			{
				return "Multibly ";
			}
			case 4:
			{
				return "Divide ";
			}
			case 5:
			{
				return "Get Final Results ";
			}
			case 6:
			{
				return "Print Result ";
			}

		default:
			break;
		}

	}

public:
	void Clear()
	{
		_Result = 0;
		_LastNum = 0;
		_OpretorIndex = 0;

	}
	void Add(int Num)
	{
		_Result += Num;
		_LastNum = Num;
		_OpretorIndex = 1;
	}
	void Subtruct(int Num)
	{
		_Result -= Num;
		_LastNum = Num;
		_OpretorIndex = 2;
	}
	void Multibly(int Num)
	{
		_Result *= Num;
		_LastNum = Num;
		_OpretorIndex = 3;

	}
	void Divide(int Num)
	{
		if (Num == 0)
		{
			Num = 1;
		}

		_Result /= Num;
		_LastNum = Num;
		_OpretorIndex = 4;

	}

	void Restul()
	{
		cout << "Result After " << Opretor() << _LastNum << " is : " << _Result << endl;
	}

};

int main()
{
	clsCalculater Calculater1;

	Calculater1.Add(10);
	Calculater1.Restul();


	Calculater1.Add(100);
	Calculater1.Restul();

	Calculater1.Subtruct(20);
	Calculater1.Restul();

	Calculater1.Multibly(1);
	Calculater1.Restul();

	Calculater1.Divide(0);
	Calculater1.Restul();

	Calculater1.Clear();
	Calculater1.Restul();


	return 0;
}
