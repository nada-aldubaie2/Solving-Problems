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


void TransposeMatrix(int arr[3][3], int arrTranpose[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++) {
			arrTranpose[i][j] = arr[j][i];
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
	int arrTranpose[3][3];

	FillArrayWithOrderedNumbers(arr, 3, 3);

	cout << "The following is 3x3 orderes matrix" << endl;
	PrintArray(arr, 3, 3);

	cout <<endl<< "The following is 3x3 transpose matrix" << endl;
	TransposeMatrix(arr, arrTranpose, 3, 3);
	PrintArray(arrTranpose, 3, 3);

	return 0;
}