#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;

bool ExitNumberInMatrix(int Matrix1[3][3], int number, short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (Matrix1[i][j] == number) 
				return true;
	return false;
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

	int Matrix1[3][3] = { {1,0,0},{0,0,10},{10,11,0} };

	cout << "Marix1 :" << endl;
	PrintArray(Matrix1, 3, 3);

	int number;
	cout << "\n please enter a number to look for in matrix: ";
	cin >> number;

	if (ExitNumberInMatrix(Matrix1,number, 3, 3))
		cout << "\n Yes: it's there\n ";
	else
		cout << "\n No: thers's not.\n ";

	return 0;
}