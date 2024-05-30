#include<iostream>
#include<ctime>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) 
		arrDestination[i] = arrSource[arrLength - 1 - i];
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int arr[100], arr2[100], arrLength;
	arrLength = ReadPositiveNumber("\nPlease enter number of array:\n");
	srand((unsigned)time(NULL));
	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nElements Array In Order:\n";
	PrintArray(arr, arrLength);

	CopyArrayInReverseOrder(arr, arr2, arrLength);
	cout << "\nElements Array After Reverse:\n";
	PrintArray(arr2, arrLength);

	return 0;
}
