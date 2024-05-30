#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int SumOfDigits(int Number)
{
	int  Remainder = 0 , sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;     
		sum += Remainder;
	}
	return sum;
}
int main()
{
	cout << "Sum of digits \n"<<SumOfDigits(ReadPositiveNumber("Enter Number"));
	cout << endl;
	return 0;
}


