#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			arr[i][j] = RandomNumber(1, 100);
}

void PrintArray(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

int ColSum(int arr[3][3], short Rows, short ColNum) {
	int sum = 0;
	for (short j = 0; j <= Rows - 1; j++) {
		sum += arr[j][ColNum];
	}
	return sum;
}

void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Cols; i++) {
		cout << "Cols " << i + 1 << " Sum= " << ColSum(arr, Rows, i) << endl;
	}
}

int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);

	cout << "The following is 3x3 random matrix" << endl;
	PrintArray(arr, 3, 3);

	cout << endl << "The following are the sum of each row in matrix" << endl;
	PrintEachColSum(arr, 3, 3);


	return 0;
}