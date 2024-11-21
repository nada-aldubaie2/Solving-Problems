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
			arr[i][j] = RandomNumber(1, 10);
}

int SumAllNumbersInMatrix(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {

			sum += arr[i][j];
		}
	}
	return sum;

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



int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix[3][3];


	FillArrayWithRandomNumbers(Matrix, 3, 3);
	cout << "Marix :" << endl;
	PrintArray(Matrix, 3, 3);

	cout << "\nSum all numbers:" << SumAllNumbersInMatrix(Matrix, 3, 3)<<endl;
	
	return 0;
}