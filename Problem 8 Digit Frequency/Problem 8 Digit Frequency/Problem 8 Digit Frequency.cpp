#include<iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int Remainder = 0, FreqCount = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

int main()
{
	int Number = ReadPositiveNumber("Enter The Number: \n");
	short DigitToCheck = ReadPositiveNumber("Enter The Digit Number: \n");
	cout << "Digit To Check is: " << DigitToCheck << endl << CountDigitFrequency(DigitToCheck, Number);
	return 0;
}