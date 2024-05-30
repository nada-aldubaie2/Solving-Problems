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
	do    {        
		cout << Message << endl;
		cin >> Number;
	}
	while (Number <= 0); 
	return Number; 
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100); 
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++)    
	{
		arrSum[i] = arr1[i] + arr2[i];   
	}
}

void PrintArray(int arr[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++)  
		cout << arr[i] << " ";
	cout << "\n"; 
} 

int main()
{
	int arr[100], arr2[100], arrSum[100], arrLength;
	arrLength = ReadPositiveNumber("\nPlease enter number of array:\n");
	srand((unsigned)time(NULL));
	FillArrayWithRandomNumbers(arr,arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	cout << "\nElements of Array 1:\n";
	PrintArray(arr, arrLength);
	cout << "\nElements of Array 2:\n";
	PrintArray(arr2, arrLength);

	cout << endl<<"The Result after sumation:\n"<<"_________________________________"<<endl;
	SumOf2Arrays(arr, arr2, arrSum, arrLength);
	PrintArray(arrSum, arrLength);
	cout << "_________________________________";

	return 0;
}
