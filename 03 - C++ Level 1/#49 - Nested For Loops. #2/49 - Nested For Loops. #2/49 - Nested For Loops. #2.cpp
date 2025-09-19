#include <iostream>
using namespace std;

int main()
{
	for (int i = 10 ; i >= 1; i--) // «·«”ÿ— : »Ì‰“· ”ÿ—
	{
		for (int j = 1; j <= i; j++) // «·⁄Ê«„Ìœ : ÂÌ Ì·Ì » ÿ»⁄ «·‰ÃÊ„ (ﬂ„ ‰Ã„… »œÌ «ÿ»⁄ »«·”ÿ—
			                         // ⁄œœ «·‰ÃÊ„ „‰ ⁄œœ  ﬂ—«—«  «·Õ·ﬁ…
		{
			cout << "*";
		}
		cout << "\n";
	}
}
