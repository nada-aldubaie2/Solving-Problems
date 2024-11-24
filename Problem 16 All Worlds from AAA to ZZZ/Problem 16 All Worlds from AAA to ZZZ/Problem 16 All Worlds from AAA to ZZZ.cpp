#include<iostream>
#include<string>

using namespace std;

void PrintInvertedNumberPattern()
{
	string word;
	for (int i = 65; i <= 90;i++)
	{
		for (int j = 1; j <= 90; j++)
		{
			for (int k = 1; k <= 90; k++)
			{

			word+= char(i);
			word += char(j);
			word += char(k);

			cout << word << endl;
			word = " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedNumberPattern();
	return 0;
}