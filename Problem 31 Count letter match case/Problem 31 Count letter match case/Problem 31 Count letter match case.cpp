#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}

char ReadChar() {
	char c;
	cout << "please Enter your charcter:\n";
	cin >> c;
	return c;
}

char InvertLetterCase(char c) {
	return isupper(c) ? tolower(c) : toupper(c);
}

short CountLetters(string s, char letter, bool MatchCase = true) {
	short counter = 0;

	for (int i = 0; i < s.length(); i++)
		if (MatchCase) {
			if (s[i] == letter)
				counter++;
		}
		else {
			if (tolower(s[i]) == tolower(letter))
				counter++;
		}

	return counter;

}
short CountCapitalLetters(string s) {
	short counter = 0;

	for (int i = 0; i < s.length(); i++)
		if (isupper(s[i]))
			counter++;

	return counter;
}

short CountSmallLetters(string s) {
	short counter = 0;

	for (int i = 0; i < s.length(); i++)
		if (islower(s[i]))
			counter++;

	return counter;
}


int main()
{
	string s = ReadString();
	char c = ReadChar();

	cout << "\nLetter: \'" << c << "\' Count= " << CountLetters(s, c);
	cout << "\nLetter: \'" << c << "\'";

	cout << " or \' " << InvertLetterCase(c) << "\' ";
	cout << "\' Count= " << CountLetters(s, c, false)<<endl;


	return 0;
}




