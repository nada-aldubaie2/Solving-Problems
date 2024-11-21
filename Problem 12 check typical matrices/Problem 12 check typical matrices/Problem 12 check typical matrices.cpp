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

bool AreEquiltyMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++) 
			if (Matrix1[i][j] != Matrix2[i][j]) {
				return false;
			}
	return true;
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

	int Matrix1[3][3], Matrix2[3][3];


	FillArrayWithRandomNumbers(Matrix1, 3, 3);
	cout << "Marix1 :" << endl;
	PrintArray(Matrix1, 3, 3);

	FillArrayWithRandomNumbers(Matrix2, 3, 3);
	cout << "Marix2 :" << endl;
	PrintArray(Matrix2, 3, 3);


	if (AreEquiltyMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYes: they are equal.\n ";
	else
		cout << "\nNo: they are not equal.\n ";



	return 0;
}