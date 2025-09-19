#pragma once

#include <iostream>

using namespace std;

namespace ReadN
{
	unsigned short ReadPositveShortNumber(string Message)
	{
		unsigned short Number;

		cout << Message << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;

		}

		return Number;
	}

	short int ReadShortNumber(string Message)
	{
		short Number;

		cout << Message << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;

		}

		return Number;
	}

	int ReadIntNumber(string Message)
	{
		int Number;

		cout << Message << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Input, Enter a valid one:" << endl;
			cin >> Number;

		}

		return Number;
	}

	int ReadPositiveNumber(string Message)
	{
		int Number;

		do
		{
			cout << Message << endl;
			cin >> Number;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

				cout << "Invalid Number, Enter a valid one:" << endl;
				cin >> Number;

			}
		} while (Number < 0);

		return Number;
	}

	float ReadFloatNumber(string Message)
	{
		float Number;

		cout << Message << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Input, Enter a valid one:" << endl;
			cin >> Number;

		}

		return Number;
	}

	double ReadDoubleNumber(string Message)
	{
		double Number;

		cout << Message << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Input, Enter a valid one:" << endl;
			cin >> Number;

		}

		return Number;
	}
}