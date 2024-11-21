#include <iostream>
#include <string>
using namespace std;

char ReadChar() {
	char c;
	cout << "please Enter your charcter:\n";
	cin >> c;
	return c;
}


bool IsVowel(char c) {
	c = tolower(c);
	return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') );
}

int main()
{
	char c = ReadChar();

	if (IsVowel(c)) 
		cout << "\nYes Letter \' " << c << "\' is vowel" ;
	else
		cout << "\nNo Letter \' " << c << "\' is not vowel"  ;

	return 0;
}




