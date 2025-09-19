#include <iostream>
using namespace std;

struct stMonyTybe
{
	int Peny, Nickel, Dime, Quartar, Dolar;
};
stMonyTybe fnReadMonyTybe()
{
	stMonyTybe MonyTybe;
	cout << "Please Enter Peny :" << endl;
	cin >> MonyTybe.Peny;
	cout << "Please Enter Nickel : " << endl;
	cin >> MonyTybe.Nickel;
	cout << "Please Enter Dime :" << endl;
	cin >> MonyTybe.Dime;
	cout << "Please Enter Quartar : " << endl;
	cin >> MonyTybe.Quartar;
	cout << "Please Enter Dolar : " << endl;
	cin >> MonyTybe.Dolar;

	return MonyTybe;
}
int CalculateTotalPeny(stMonyTybe MonyTybe) //„‘«‰ „« «‘ €· ⁄·Ï ‰”Œ… À«‰Ì… ›«÷Ì… „‰ «·” —«ﬂ‘— »„—— Ì·Ì ›Êﬁ
{
	int TotalPeny = 0;
	TotalPeny = (MonyTybe.Peny * 1) + (MonyTybe.Nickel * 5) + (MonyTybe.Dime * 10) +
		(MonyTybe.Quartar * 25) + (MonyTybe.Dolar * 100);

	return TotalPeny;
}
/*float CalculateTotalDolar(float TotalPeny)
{
	float TotalDolar = TotalPeny * 0.01;

	return TotalDolar;
}*/ //»”ÿ ﬁ—«¡… «·ﬂÊœ Ê·«  ⁄ﬁœ 
void PrintResult(int TotalPeny )
{
	//float TotalDolar = CalculateTotalDolar(TotalPeny);
	cout << "Total Peny : " << TotalPeny << endl;
	cout << "Total Dolar : " << (float)TotalPeny / 100 << endl; //Œ·’ «· Ê «·  »⁄ «·œÊ·«— ﬁ«œ— «‰ﬂ  Õ”»Ê ÂÊ‰ Ê»·« ›«‰ﬂ‘‰ \
	                                                       Ê ⁄ﬁÌœ »«—„Ì —«  “Ì«œ Œ·’ ﬂ »Ê ÊŒ·Ê’
	                                                       // Ê «· «·»Ì‰Ì «‰ Ã— „‰ÕÊ·Ê ·›·Ê  
														   // Ê»” Ì ﬁ”„ ⁄· „Ì… »Ìÿ⁄ ›·Ê 

}
int main()
{
	PrintResult(CalculateTotalPeny(fnReadMonyTybe()));

	return 0;
}
