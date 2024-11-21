#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}


bool IsVowel(char c) {
	c = tolower(c);
	return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

void printAllVowels(string s) {

	cout << "Vowels in string are: ";
	for (int i = 0; i < s.length(); i++) {
		if (IsVowel(s[i]))
			cout<< s[i]<<"   ";
	}
}
int main()
{
	string s = ReadString();
	printAllVowels(s);

	return 0;
}



