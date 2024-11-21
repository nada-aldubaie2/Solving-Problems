#include <iostream>
using namespace std;

void PrintFibonacciSeriesUsingRecursion(short Number, int prev1, int prev2) {

	int FebNumber = 0;
	if (Number > 0) 
	{
		FebNumber = prev1 + prev2;
		prev2 = prev1;
		prev1 = FebNumber;
		cout << FebNumber << "   ";

		PrintFibonacciSeriesUsingRecursion(Number - 1, prev1, prev2);				
	}

}

int main()
{
	PrintFibonacciSeriesUsingRecursion(10, 0, 1);

	return 0;
}


