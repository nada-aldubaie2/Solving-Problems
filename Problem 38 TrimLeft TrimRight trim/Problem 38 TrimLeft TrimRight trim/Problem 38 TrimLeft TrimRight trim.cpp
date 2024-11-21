#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}

string TrimLeft(string s) {

	for (short i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			return s.substr(i, s.length() - i);
		}
	}
	return "";	
}

string TrimRight(string s) {

	for (short i = s.length() - 1; i >= 0 ; i--) {
		if (s[i] != ' ') {
			return s.substr(0, i + 1);
		}
	}	
	return "";
}

string Trim(string s) {

	return TrimLeft(TrimRight(s));
}

int main()
{
	string s = "    Nada Aldubaie    ";
	cout << "\nString ="<<s;
	cout << "\n\nTrim left =" << TrimLeft(s);
	cout << "\nTrim Right =" << TrimRight(s);
	cout << "\n\nTrim =" << Trim(s);


	return 0;
}