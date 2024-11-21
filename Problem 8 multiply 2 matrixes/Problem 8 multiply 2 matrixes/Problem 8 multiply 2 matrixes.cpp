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

void MultiplyMatrixes(int arr1[3][3], int arr2[3][3], int arrMultiply[3][3], short Rows, short Cols)
{
	int counter = 1;
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {

			arrMultiply[i][j] = arr1[i][j] * arr2[i][j];
		}

	}
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


void PrintMatrixesMultiply(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j]<<"    ";
		}
		cout << endl;
	}
}

int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];


	FillArrayWithRandomNumbers(Matrix1, 3, 3);
	cout << "Marix 1:" << endl;
	PrintArray(Matrix1, 3, 3);

	cout <<endl << "Matrix2:" << endl;
	FillArrayWithRandomNumbers(Matrix2, 3, 3);
	PrintArray(Matrix2, 3, 3);

	cout << "\n Result: \n";
	MultiplyMatrixes(Matrix1, Matrix2, MatrixResult, 3, 3);
	PrintMatrixesMultiply(MatrixResult, 3, 3);


	return 0;
}