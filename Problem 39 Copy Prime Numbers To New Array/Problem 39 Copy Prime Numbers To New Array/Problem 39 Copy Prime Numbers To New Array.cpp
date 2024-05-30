#include<iostream>
#include<ctime>
using namespace std;
enum enPrimeORNotPrime{ Prime=1 , NotPrime=2};

enPrimeORNotPrime CheckIfPrime(int Number)
{
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
		{
			return enPrimeORNotPrime::NotPrime;
		}
		return enPrimeORNotPrime::Prime;
	}
}

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void CopPrimeArrayNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		if (CheckIfPrime (arrSource[i])==enPrimeORNotPrime::Prime)
		{
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
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
	//Seeds the random number generator in C++, called only once   
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;
	FillArrayWithRandomNumbers(arr, arrLength);

	CopPrimeArrayNumbers(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);
	cout << "\nArray Prime elements :\n";
	PrintArray(arr2, arr2Length);

	return 0;
}
