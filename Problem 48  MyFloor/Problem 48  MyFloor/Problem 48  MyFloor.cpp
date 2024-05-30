#include<iostream>
#include<cmath>
using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}


int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	return Number;
	

}
float  ReadNumber()
{
	float Number;
	cout << "Please enter a float number\n";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = ReadNumber();
	cout << "My Ceil Result : " << MyCeil(Number) << endl;
	cout << "C++ Ceil Result: " << ceil(Number) << endl;
	return 0;
}

#
