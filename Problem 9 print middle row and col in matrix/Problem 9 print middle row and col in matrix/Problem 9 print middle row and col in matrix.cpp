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


void PrintArray(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "    ";
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

void PrintMiddleRow(int arr[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for (short j = 0; j < Cols; j++) {
			printf("%0*d ", 2, arr[MiddleRow][j]);
	}
		cout << "\n";
}

void PrintMiddleCol(int arr[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;
	for (short j = 0; j < Cols; j++) {
		printf("%0*d ", 2, arr[j][MiddleCol]);
	}
	cout << "\n";
}

int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];


	FillArrayWithRandomNumbers(Matrix1, 3, 3);
	cout << "Marix 1:" << endl;
	PrintArray(Matrix1, 3, 3);


	cout << "\nMiddle Row of Matrix 1 is: \n";
	PrintMiddleRow(Matrix1, 3, 3);

	cout << "\nMiddle Col of Matrix 1 is: \n";
	PrintMiddleCol(Matrix1, 3, 3);



	return 0;
}