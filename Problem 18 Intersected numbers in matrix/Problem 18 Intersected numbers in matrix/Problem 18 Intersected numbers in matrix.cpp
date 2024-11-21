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
	int Matrix2[3][3] = { {1,7,12},{11,10,10},{2,11,0} };


	cout << "Marix1 :" << endl;
	PrintMatrix(Matrix1, 3, 3);

	cout << "Marix2 :" << endl;
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n Intersectes numbers are: \n\n";
	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

	return 0;
}