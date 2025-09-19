#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

namespace MyLib

{
	int ReadPositiveNumber(string Message)
	{
		int Number;
		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number < 0);


		return Number;
	}

	//enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
	//enPrimeNotPrime CheckIsPrimeNumber(int Number)
	//{
	//	if (Number == 1)
	//	{
	//		return enPrimeNotPrime::NotPrime;
	//	}

	//	if (Number <= 3)
	//	{
	//		return enPrimeNotPrime::Prime;
	//	}

	//	for (int i = 2; i < Number;i++)
	//	{
	//		if (Number % i == 0)
	//		{
	//			return enPrimeNotPrime::NotPrime;
	//		}
	//		// åæ ÚÏÏ Çæáí ÍÊì íÏÎá ÇáÇİ Çí Çäå ŞÈá ÇáŞÓãÉ Úáì ÚÏÏ ÛíÑ äİÓå æÇáæÇÍÏ ÈÇáÊÇáí åæ ÛíÑ Çæáí ÈíÑÌÚáí æÈØáÚ ÈÑÇ ÇáßæÏ1 íÇåÇ ÇØÈÚåÇ
	//		// ÇĞÇ ãÇ ÑÌ
	//	}
	//	//defult
	//	return enPrimeNotPrime::Prime;
	//}
	//void PrintPrimeNumbersFrom1ToN(int N)
	//{
	//	cout << endl;
	//	cout << "Prime Numbers From 1 To " << N << " are : " << endl;
	//	for (int i = 1; i <= N; i++)
	//	{
	//		if (CheckIsPrimeNumber(i) == enPrimeNotPrime::Prime)
	//			cout << i << endl;
	//	}

	//}

	//bool IsPerfectNumber(int Number)
	//{
	//	int sum = 0;
	//	for (int i = 1; i < Number; i++)
	//	{
	//		if (Number % i == 0)
	//		{
	//			sum += i;
	//		}
	//	}
	//	return Number == sum; // åæä ãÇİí ÏÇÚí ÍØ Çİ ÎáÕ ãÈÇÔÑÉ ÈÑÌÚáí ÊÑæ Çæ İæáÓ

	//}
	//void PrintPerfectNumber(int Number)
	//{
	//	if (IsPerfectNumber(Number))
	//	{
	//		cout << Number << " is Perfect. " << endl;
	//	}
	//	else
	//		cout << Number << " is Not Perfect. " << endl;
	//}

	//void PrintDigitsInReservedOrder(string Number)
	//{
	//	cout << endl;
	//	for (int i = Number.length() - 1; i >= 0; i--)
	//	{
	//		cout << Number[i] << endl;
	//	}
	//}

	int ReverseNumber(int Number)
	{
		int Number2 = 0;
		while (Number > 0)
		{
			int Reminder = Number % 10;
			Number = Number / 10;
			Number2 = Number2 * 10 + Reminder;
		}
		return Number2;
	}

	int ContDigitFrequency(int NumberForCounting, int Number)
	{
		int FreqCont = 0; //ÊßÑÇÑ ÇáÑŞã
		while (Number > 0)
		{
			int Reminder = Number % 10;
			Number = Number / 10;
			if (Reminder == NumberForCounting)
				FreqCont++;
		}
		return FreqCont;
	}

	string ReadText()
	{
		string Text;
		cout << "Please Enter Text :" << endl;
		getline(cin, Text);

		return Text;
	}

	int RandomNumber(int From, int To)
	{
		int randnum = rand() % (To - From + 1) + From;

		return randnum;
	}
	//srand((unsigned)time(NULL));
	enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
	char GetRandomCharacter(enCharType CharType)
	{
		switch (CharType)
		{
		case enCharType::SamallLetter: return char(RandomNumber(97, 122));
		case enCharType::CapitalLetter: return char(RandomNumber(65, 90));
		case enCharType::SpecialCharacter: return char(RandomNumber(33, 47));
		case enCharType::Digit: return char(RandomNumber(48, 57));
		}
		return '\0';
	}
	string GenerateWord(enCharType CharType, short Length)
	{
		string Word;
		for (int i = 1; i <= Length; i++)
		{
			Word += GetRandomCharacter(CharType);
		}
		return Word;
	}
	string GenerateKey()
	{
		string Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
		Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
		Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
		Key += GenerateWord(enCharType::CapitalLetter, 4);

		return Key;
	}


	int* ReadArray(int ArrayLength)
	{
		int* Numbers = new int[ArrayLength]; // ÊÎÕíÕ ãÕİæİÉ ÏíäÇãíßíÉ}

		for (int i = 0; i < ArrayLength; i++)
		{
			cout << "Elment [" << i + 1 << "] : ";
			cin >> Numbers[i];
		}

		return Numbers;
	}

	int MaxNumberOfArray(int numbers[], int lengthArray)
	{
		int MaxNumber = 0;
		for (int i = 0; i < lengthArray; i++)
		{
			if (numbers[i] > MaxNumber)
			{
				MaxNumber = numbers[i];
			}
		}
		return MaxNumber;
	}

	int MinNumberOfArray(int numbers[100], int lengthArray)
	{
		int MinNumber = numbers[0]; //åí ÇßËÑ ÍÑİíÉ ãä íáí ŞÈáåÇ 
		for (int i = 1; i < lengthArray; i++)
		{
			if (numbers[i] < MinNumber)
			{
				MinNumber = numbers[i];
			}
		}
		return MinNumber;
	}

	int SumArrayElements(int* numbers, int lengthArray)
	{
		int Sum = 0;
		for (int i = 0; i < lengthArray; i++)
		{
			Sum += numbers[i];
		}

		return Sum;
	}

	float ArrayAverage(int* numbers, int lengthArray)
	{
		return float(SumArrayElements(numbers, lengthArray)) / lengthArray;

	}

	void PrintArrayElements(int* numbers, int lengthArray)
	{
		for (int i = 0; i < lengthArray; i++)
		{
			cout << numbers[i] << " ";
		}
		cout << endl;
	}

	void CopyArray(int* originalArray, int* copiedArray, int lengthArray)
	{
		for (int i = 0; i < lengthArray; i++)
		{
			copiedArray[i] = originalArray[i];
		}
	}

	void SumOfTwoArraysToThird(int* arr1, int* arr2, int* arr3, int LengthOfArrays)
	{
		for (int i = 0; i < LengthOfArrays; i++)
		{
			arr3[i] = arr1[i] + arr2[i];
		}
	}

	void Swap(int& A, int& B)
	{
		int Tumb;

		Tumb = A;
		A = B;
		B = Tumb;
	}

	void ReverseArray(int* OrginalArray, int* ReverseArrayNumber, int lengthArray)
	{

		for (int i = 0; i < lengthArray; i++)
		{
			ReverseArrayNumber[i] = OrginalArray[lengthArray - 1 - i];
		}

	}

	int ReturnNumberIndexInArray(int* ArrayOfNumber, int LengthArray, int NumForSearch)
	{

		for (int i = 0; i < LengthArray; i++)
		{
			if (ArrayOfNumber[i] == NumForSearch)
			{
				return i;
			}
		}
		return -1;
	}
	void AddArrayElement(int Number, int arr[100], int& arrLength) //ÊÓÊÎÏã áÇäÔÇÁ ãÕİæİÉ æÊÚÈÉ ÚäÇÕÑåÇ Çæá ÈÇæá ãÚ ÇáÍİÇÙ Úáì ÇáØæá
		// İÈÏá ãÇ ÚÈí ÇáãÕİæİÉ ÈÇáØÑíŞÉ ÇáÚÇÏíÉ íáí ÈÇáİíá ÇÑíí ÈÓÊÎÏã åí
		// ÈÓ ÈãÑÑáæ ÇáÑŞã íáí ÈÏí Öíİæ ááãÕİæİÉ 
	   // æÇáØæá ÇĞÇ ãÊá åæä ãÚÊãÏ Úáì Øæá ãÕİæİÉ ŞÈáå
	   // ÇãÇ áæ ßÇä áãÕİæİÉ ãæ ãÚÑæİ ØæáåÇ
	  // ÈÓÊÎÏã Ïæ æÇíá ÈİÇäßÔä ÈÇáÍáŞÉ Èíßæä İí ÇáÑÓÇáÉ íáí ÈÊÇÎÏ ÇáÑŞã
	  //æÈÊÓÇá ÇĞÇ ÈÏæ íßãá æáÇ áÇ æÈÊÓÊÏÚí İÇäÔßä åÇÏ
	{
		arrLength++;
		arr[arrLength - 1] = Number; // İíäí ÍØ ÇáÚÏÇÏ ÊÍÊ ÈÓ åíß ÇİÖá áÇä ÈÖáäí Úã ÍÇİÙ Úáì ÇáØæá äÙÇãí 
		//ãÇ Èíßæä ÒÇíÏ æÇÍÏ 
		// ÈÓ ØÇáãÇ ÇäÇ Úã ÇÓÊÎÏã Øæá ÇáãÕİæİÉ ÇáÇæáì áíßæä åæ Øæá ÇáÍáŞÉ åí ÇáãäÓæÎÉ İÚÇÏí
		// íáí ÈÏß ÇÓÊÎÏã
		//ÇĞÇ ÈÏí ÎáíåÇ ÊÍÊ ÈÏí ÈÏí Îáíå ÇáÇäÏßíÓ ÈÓ áíäÛË ÈÏæä -1
	}
	void CopyOddNumbersToNewArray(int* originalArray, int& originalLength, int* copiedArray, int& copiedLength)
	{
		for (int i = 0; i < originalLength; i++)
		{
			if (originalArray[i] % 2 != 0)
			{
				AddArrayElement(originalArray[i], copiedArray, copiedLength);
			}
		}
	}

	bool IsPalaindromeArray(int* arrSource, int* arrReversed, int lengthArray)
	{
		for (int i = 0; i < lengthArray; i++)
		{
			if (arrSource[i] != arrReversed[i])
				return false;
		}
		return true;
	}


	int EvenDigitCounter(int arr[100], int& arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if ((arr[i] % 2 == 0))
				Counter++;
		}
		return Counter;
	}

	int PositiveCount(int arr[100], int& arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] > 0)
				Counter++;
		}
		return Counter;
	}

	int NigativeCount(int arr[100], int& arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < 0)
				Counter++;
		}
		return Counter;
	}

	string Tap(int Number)
	{
		string T = "";

		for (int i = 1; i <= Number; i++)
		{
			T = T + "\t";
		}

		return T;
	}

	void GreenScreenColore()
	{

		system("color 2F"); //green

	}
	void RedScreenColore()
	{

		system("color 4F"); //Red

	}
	void YallowScreenColore()
	{

		system("color 6F"); //Yallow

	}

	void ResetScreen()
	{
		system("cls");
		system("color 0F");
	}

}