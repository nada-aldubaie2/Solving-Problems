#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}
 
char InvertLetterCase(char c) {
	return isupper(c) ? tolower(c) : toupper(c);
}

string InvertStringCase(string s) {	
	for (int i = 0; i < s.length(); i++) {
		s[i] = InvertLetterCase(s[i]);
	}
	return s;
}



int main()
{
	string s = ReadString();
	cout << "\nString after inverting case: \n";

	s = InvertStringCase(s);
	cout << s << endl;

	return 0;
}



