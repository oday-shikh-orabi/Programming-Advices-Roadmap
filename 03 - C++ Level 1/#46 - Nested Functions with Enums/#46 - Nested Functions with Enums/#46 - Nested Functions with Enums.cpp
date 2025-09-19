#include <iostream>
using namespace std;

enum enWeekDays {sun = 1 , Mon = 2 , Tues = 3 , Wed = 4 , Tur = 5 , Friday = 6 , Satrday = 7};

void fnPrintWeekMenu()
{
	cout << "*********************\n";
	cout << "1: Sunday \n";
	cout << "2: Monday \n";
	cout << "3: Tuesday \n";
	cout << "4: Wednsday \n";
	cout << "5: Tursday \n";
	cout << "6: Friday \n";
	cout << "7: Satrday \n";
	cout << "*********************\n";
	cout << "Please enter the number of day?" << endl;

}
enWeekDays fnReadDay()
{
	int Dinput;
	cin >> Dinput;

	//enWeekDays WeekDay;
	return (enWeekDays)Dinput;
}
string fnPrintDay(enWeekDays WeekDay) //åæä ÇäÊ ÈÏß ÊãÑÑ Ôí ãä äãØ ÇáŞíãÉ íáí Úã ÊÑÌÚåÇ ÈÇáİÇäßÔä íáí ŞÈá
                                      //æåÇÏ ÇáİÇäßÔä ÈÏæ íÑÌÚáí ÇÎÑ Ôí ÓÊÑíäÛ áåíß ÈÍØæ ãä äãØ ÓÊÑíäÛ
{
	switch (WeekDay)
	{
	case enWeekDays::Mon:
		return "Monthday";
		break;
	case enWeekDays::Tues:
		return "Tuesday";
		break;
	case enWeekDays::Wed:
		return "Wednsday";
		break;
	case enWeekDays::Tur:
		return "Thursday";
		break;
	case enWeekDays::Friday:
		return "Friday";
		break;
	case enWeekDays::Satrday:
		return "Satrday";
		break;
	case enWeekDays::sun:
		return "Sunday";
		break;
	
	default:
		return "Not Day of Week ";
		break;
	}
}

int main()
{
	enWeekDays WeekDays;
	fnPrintWeekMenu();
	//fnReadDay();
	//fnPrintDay(WeekDays);

	cout << "Today Is : " << fnPrintDay(fnReadDay());
	return 0;
}
