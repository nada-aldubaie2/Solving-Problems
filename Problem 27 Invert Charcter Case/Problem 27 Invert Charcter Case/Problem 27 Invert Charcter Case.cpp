#include <iostream>
#include <string>
using namespace std;

char ReadChar() {
	char c;
	cout << "please Enter your charctar:\n";
	cin>> c;
	return c;
}

char InvertLetterCase(char c) {
	return isupper(c) ? tolower(c) : toupper(c);
}

int main()
{
	char c = ReadChar();
	cout << "\nChar after inverting case: \n";

	c = InvertLetterCase(c);
	cout << c << endl;

	return 0;
}

