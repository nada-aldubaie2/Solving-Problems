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

void SumEachRowArr(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	int counter = 1;
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {

			sum += arr[i][j];
		}
		printf("\n Row %d Sum = ", counter);
		counter++;
		cout << sum;
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

int RowSum(int arr[3][3], short RowNum, short Cols){
	int sum = 0;
	for (short j = 0; j <= Cols-1; j++) {
		sum += arr[RowNum][j];
	}
		return sum;
}

void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++) {
		cout << "Row " << i + 1 << "Sum= " << RowSum(arr, i, Cols)<<endl;
		}
}

int main()
{

	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);

	cout << "The following is 3x3 random matrix"<<endl;
	PrintArray(arr, 3, 3);

	cout << endl<< "The following are the sum of each row in matrix"<<endl;
	SumEachRowArr(arr, 3, 3);
	//Another way
	PrintEachRowSum(arr, 3, 3);


	return 0;
}