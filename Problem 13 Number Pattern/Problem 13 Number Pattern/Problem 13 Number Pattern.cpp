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
	for (int i = 1; i <= Number; i++)
	{
		for (int j = i; j >=1; j--)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;
}