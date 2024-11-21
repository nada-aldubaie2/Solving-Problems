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

short CountNumberInMatrix(int Matrix1[3][3],int Number, short Rows, short Cols) {

	short NumberCount = 0;

	for (short i = 0; i < Rows; i++)
		for (short j = 0; j < Cols; j++)
			if (Matrix1[i][j] == Number) {
				NumberCount++;
			}
	return NumberCount;
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
	int Matrix1[3][3] = { {1,7,12},{7,9,10},{10,11,9} };

	//FillArrayWithRandomNumbers(Matrix1, 3, 3);
	cout << "Marix1 :" << endl;
	PrintArray(Matrix1, 3, 3);

	int Number;
	cout << "\n Enter the number to count in the matrix? ";
	cin >> Number;
	cout << "\nNumber " << Number << " count in the matrix is " << CountNumberInMatrix(Matrix1, Number, 3, 3)<<endl;



	return 0;
}