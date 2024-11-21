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

short CountVowels(string s) {
	short counter = 0;
	for (int i = 0; i < s.length(); i++) {
		if (IsVowel(s[i]));
		counter++;
	}
	return counter;
}
int main()
{
	string s = ReadString();
	cout << "Number of the vowels is: "<< CountVowels(s);

	return 0;
}



