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

short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols) {

	short NumberCount = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (Matrix1[i][j] == Number) {
				NumberCount++;
			}
	return NumberCount;
}

bool IsSparseMatrix(int Matrix1[3][3], short Rows, short Cols) {
	short MatrixSize = Rows * Cols;
	return (CountNumberInMatrix(Matrix1, 0, 3, 3) >= ( MatrixSize / 2));
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
	//int Matrix1[3][3];
	int Matrix1[3][3] = { {1,0,0},{0,0,10},{10,11,0} };

	//FillArrayWithRandomNumbers(Matrix1, 3, 3);
	cout << "Marix1 :" << endl;
	PrintArray(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1, 3, 3)) 
		cout << "\n Yes it's sparse matrix.\n ";
	else 
		cout << "\n No it's not sparse matrix.\n ";
	
	return 0;
}