#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;

bool IsNumberInMatrix(int Matrix1[3][3], int number, short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (Matrix1[i][j] == number)
				return true;
	return false;
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << "    ";

		}
		cout << "\n";
	}
}
int MinimumNumberInMatrix(int Matrix1[3][3], short Rows, short Cols) {
	int min = Matrix1[0][0];
	for (short i = 0; i < Rows; i++) 
		for (short j = 0; j < Cols; j++) {
			if (Matrix1[i][j] < min) {
				min = Matrix1[i][j];
			}
		}
	return min;
}

int MaximumNumberInMatrix(int Matrix1[3][3], short Rows, short Cols) {
	int max = Matrix1[0][0];
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++) {
			if (Matrix1[i][j] > max) {
				max = Matrix1[i][j];
			}
		}
	return max;
}
void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	int Number;
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			Number = Matrix1[i][j];
			if (IsNumberInMatrix(Matrix2, Number, 3, 3))
			{
				cout << setw(3) << Number << "    ";
			}

		}
		cout << "\n";
	}
}

int main()
{

	int Matrix1[3][3] = { {1,7,0},{0,8,10},{10,11,5} };

	cout << "Marix1 :" << endl;
	PrintMatrix(Matrix1, 3, 3);


	cout << "\n Minimum number is:\n";
	cout<< MinimumNumberInMatrix(Matrix1, 3, 3);

	cout << "\n Maximum number is:\n";
	cout << MaximumNumberInMatrix(Matrix1, 3, 3);

	return 0;
}