#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void PrintFibonacciSeriesUsingLoop(short Number) {

	int FebNumber = 0;
	int prev1 = 1, prev2 = 0;
	for (short i = 2; i <= Number; i++) {

		FebNumber = prev1 + prev2;
		cout << FebNumber << "   ";
		prev2 = prev1;
		prev1 = FebNumber;
	}

}

int main()
{
	PrintFibonacciSeriesUsingLoop(10);

	return 0;
}


