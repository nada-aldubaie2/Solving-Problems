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

void printDigitFrequency(int Number)
{
	short DigitFrequency = 0;
	for (int i = 0; i < 10; i++)
	{
		DigitFrequency = CountDigitFrequency(i, Number);
		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " frequencu is: " << DigitFrequency << " Times.";
		}
		cout << endl;
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter The Number: \n");
	 printDigitFrequency( Number);
	return 0;
}