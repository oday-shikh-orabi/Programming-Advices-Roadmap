#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class clsString
{
	string _Value;


	static char InvertLetterCase(char char1)
	{
		return isupper(char1) ? tolower(char1) : toupper(char1);
	}

	static bool IsVowel(char Ch1)
	{
		Ch1 = tolower(Ch1);
		return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
	}

public:

	clsString()
	{
		_Value = " ";
	}

	clsString(string Value)
	{

		_Value = Value;

	}


	void setString(string Value)
	{

		_Value = Value;

	}

	string GetString()
	{

		return _Value;

	}
	



	__declspec(property(get = GetString, put = setString)) string Value;


	static string Tap(int Number)
	{
		string T = "";

		for (int i = 1; i <= Number; i++)
		{
			T = T + "\t";
		}

		return T;
	}

	static string ReadString(string Message)
	{
		string st;
		cout << Message << endl;
		getline(cin, st);

		return st;
	}

	string ReadString()
	{

		return ReadString(_Value);

	}

	static string UpperFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;

		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}

			isFirstLetter = (S1[i] == ' ' ? true : false);
		}

		return S1;
	}

	string UpperFirstLetterOfEachWord()
	{
		return UpperFirstLetterOfEachWord(_Value);
	}

	static string LowerFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;

		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}

			isFirstLetter = (S1[i] == ' ' ? true : false);
		}

		return S1;
	}

	string LowerFirstLetterOfEachWord()
	{
		return LowerFirstLetterOfEachWord(_Value);
	}

	static string UpperAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);

		}

		return S1;
	}

	string UpperAllString()
	{
		return UpperAllString(_Value);
	}

	static string LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}

		return S1;
	}

	string LowerAllString()
	{
		return LowerAllString(_Value);
	}

	static string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	string TrimLeft()
	{
		return TrimLeft(_Value);
	}

	static string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1); //Â·ﬁ «· i ÂÌ Ê«ﬁ›Ï ⁄‰œ «Ê· Õ—› „‰ «·Ì„Ì‰ ·ﬂ‰ œ«·… «·”Ê» ” —Ì‰€ „« » ﬁ—«Â« «–« ﬁ·  „‰ «·’›— ·⁄‰œÂ« 
				// »œﬂ  “Ìœ Ê«Õœ ·Õ Ï  ﬁ—« «Œ— Õ—›
				//Substr(0,ﬁ»· «Œ— Õ—› + 1) 
				// »Ìÿ·⁄ „⁄ﬂ «Œ— Ê«Õœ
			}
		}
		return "";
	}

	string TrimRight()
	{
		return TrimRight(_Value);
	}

	static string Trim(string S1)
	{
		return TrimLeft(TrimRight(S1));
	}

	string Trim()
	{
		return Trim(_Value);
	}

	static short CountWords(string S1)
	{
		string delim = " "; // delimiter
		short Counter = 0;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters
			while ((pos = S1.find(delim)) != std::string::npos)
			{
				sWord = S1.substr(0, pos); // store the word
				if (sWord != "")
				{
					Counter++;
				}
				//erase() until positon and move to next word.
				S1.erase(0, pos + delim.length());
			}
		if (S1 != "")
		{
			Counter++; // it counts the last word of the string.
		}
		return Counter;
	}


	short CountWords()
	{
		return CountWords(_Value);
	};


	static short CountCapitalLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountCapitalLetters()
	{
		return CountCapitalLetters(_Value);
	}

	static short CountSmallLetters(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountSmallLetters()
	{
		return CountSmallLetters(_Value);
	}

	static short CountLetter(string S1, char Letter)
	{
		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Letter)
				Counter++;
		}

		return Counter;
	}

	short CountLetter(char Letter)
	{
		return CountLetter(_Value, Letter);
	}

	static short CountLetterMathCase(string S1, char Letter, bool MatchCase = true)
	{
		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{
			if (MatchCase)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}
		}

		return Counter;
	}

	short CountLetterMathCase(char Letter, bool MatchCase = true)
	{
		return CountLetterMathCase(_Value, Letter, MatchCase);
	}

	static short CountVowels(string S1)
	{
		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}

		return Counter;
	}

	short CountVowels()
	{
		return CountVowels(_Value);
	}

	static string InvertAllStringLettersCase(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}
		return S1;
	}

	string InvertAllStringLettersCase()
	{
		return InvertAllStringLettersCase(_Value);
	}

	static vector<string> SplitString(string S1, string Delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord;

		// use find() function to get the position of the delimiters
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				vString.push_back(sWord);
			}

			S1.erase(0, pos + Delim.length());
		}

		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string
		}

		return vString;
	}

	vector<string> SplitString(string Delim)
	{
		return SplitString(_Value, Delim);
	}

	static string JoinString(vector<string> vString, string Delim) //» ÕÊ·ﬂ «·›Ìﬂ Ê— · ” —Ì‰€
	{
		string S1;

		for (string& s : vString)
		{
			S1 = S1 + s + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());
	}

	static string ReplaceWordInStringUsingSplit(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
	{
		vector<string> vString = SplitString(S1, " ");

		for (string& s : vString)
		{
			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = sRepalceTo;
				}
			}
			else
			{
				if (LowerAllString(s) == LowerAllString(StringToReplace))
				{
					s = sRepalceTo;
				}
			}
		}

		return JoinString(vString, " ");
	}

	string ReplaceWordInStringUsingSplit(string StringToReplace, string sRepalceTo, bool MatchCase = true)
	{
		return ReplaceWordInStringUsingSplit(_Value, StringToReplace, sRepalceTo, MatchCase);
	}

	static string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
	{
		short pos = S1.find(StringToReplace);

		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
			pos = S1.find(StringToReplace); // find next
		}

		return S1;
	}

	string ReplaceWordInStringUsingBuiltInFunction(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWordInStringUsingBuiltInFunction(_Value, StringToReplace, sRepalceTo);
	}

	static string ReverseWordsInString(string S1)
	{
		vector<string> vString;
		string S2 = "";

		vString = SplitString(S1, " ");

		// declare iterator
		vector<string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}

		// remove last space
		S2 = S2.substr(0, S2.length() - 1);

		return S2;
	}

	string ReverseWordsInString()
	{
		return ReverseWordsInString(_Value);
	}

	static string RemovePunctuationsFromString(string S1)
	{
		string S2 = "";

		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}

		return S2;
	}

	string RemovePunctuationsFromString()
	{
		return RemovePunctuationsFromString(_Value);
	}

	static void PrintEachWordInString(string S1) //» ÿ»⁄ «·ﬂ·„«  Ì·Ì »«·”·”·… «·‰’Ì… ⁄·Ï ‘ﬂ· ⁄«„Êœ ﬂ· ﬂ·„… »”ÿ—
	{
		string delim = " "; // delimiter
		cout << "\nYour string words are:\n\n";

		short pos = 0;
		string sWord; // define a string variable

		// use find() function to get the position of the delimiters
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word

			if (sWord != "")
			{
				cout << sWord << endl;
			}

			S1.erase(0, pos + delim.length());  // erase() until position and move to next word.
		}

		if (S1 != "")
		{
			cout << S1 << endl; // print last word of the string
		}
	}

	void PrintEachWordInString()
	{
		return PrintEachWordInString(_Value);
	}

	static int ReadPlayAgin()
	{
		char PlayAginY_N;
		do
		{
			cout << "\n" << "Do You Want To Play again ? Y / N ? ";
			cin >> PlayAginY_N;
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // „”Õ »«ﬁÌ «·≈œŒ«·  „À· aa 
		} while (PlayAginY_N != 'Y' && PlayAginY_N != 'y' && PlayAginY_N != 'N' && PlayAginY_N != 'n');

		return PlayAginY_N;
	}







};

