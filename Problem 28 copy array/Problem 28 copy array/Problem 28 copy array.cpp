#include<iostream>
#include<ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
void CopyArray(int arrSource[100], int arrDesetenation[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrDesetenation[i] = arrSource[i];

	}
}
int main()
{
	//Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL));
	int arr[100], arrLength,arr2[100];
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements before copy: ";
	PrintArray(arr, arrLength);
	CopyArray(arr, arr2, arrLength) ;
	cout << "\nArray elements after copy : ";
	PrintArray(arr2, arrLength);

	return 0;
}