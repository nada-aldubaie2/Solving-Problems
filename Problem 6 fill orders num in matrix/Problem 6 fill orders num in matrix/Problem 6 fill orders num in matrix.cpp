#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;



void FillArrayWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++) {
			Counter++;
			arr[i][j] = Counter;
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



int main()
{

	int arr[3][3];

	FillArrayWithOrderedNumbers(arr, 3, 3);

	cout << "The following is 3x3 random matrix" << endl;
	PrintArray(arr, 3, 3);

	return 0;
}