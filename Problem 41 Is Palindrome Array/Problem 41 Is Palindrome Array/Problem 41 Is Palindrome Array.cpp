#include<iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	cout << "Enter Number Of Length :\n";
	cin >> arrLength;
	cout << "Enter Element Of Array :\n";
	for (int i = 0; i < arrLength; i++)
	{

		cin >> arr[i];
	}
	
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindromeArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
		{
			return false;
		}
		return true;

	}
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}

int main()
{
	int arr[100], Length = 0;

	FillArray(arr, Length);

	cout << "\n Array elements:\n";
	PrintArray(arr, Length);

	if(IsPalindromeArray(arr,Length))
		cout << "\n Yes Array is plaindrome\n";
	else      
		cout << "\n NO array is NOT Palindrome\n";

	PrintArray(arr, Length);
	return 0;
}

