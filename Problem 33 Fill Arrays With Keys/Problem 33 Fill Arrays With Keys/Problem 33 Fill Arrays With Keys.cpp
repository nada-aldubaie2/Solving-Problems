#include<iostream>
#include<string>
#include <ctime>

using namespace std;

enum enCharType
{
	SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4
};
int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SamallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	}
}

string GenerateWord(enCharType CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string  GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : ";
	}
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKey();
}


void PrintstringArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) {
		cout << "Array Key [" << i << "] : " << arr[i] << " ";
		cout << GenerateKey() << endl;
	}
}

int main()
{
	string  arr[100];
	int arrLength;
	arrLength = ReadPositiveNumber("\nPlease enter number of array:\n");
	srand((unsigned)time(NULL));

	FillArrayWithKeys(arr, arrLength);

	cout << "\n Array Elements Keys:\n\n";
	PrintstringArray(arr, arrLength);

	return 0;
}






