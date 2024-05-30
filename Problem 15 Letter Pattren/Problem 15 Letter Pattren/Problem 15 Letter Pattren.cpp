#include<iostream>
#include<string>

using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	cout << "\n";
	return Number;
}
void PrintInvertedNumberPattern(int Number)
{
	for (int i = 65 ; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)//j<= i- 65 + 1
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;
}