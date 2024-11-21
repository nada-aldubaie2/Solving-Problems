#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string S1;
	cout << "please Enter your string:\n";
	getline(cin, S1);
	return S1;
}

string UpperFirstLetterOfEachWord(string S1) {
	bool isFirstLetter = true;
	cout << "\nString after conversion:\n";

	for (short i = 0; i < S1.length(); i++) {
		if (S1[i] != ' ' && isFirstLetter) {
			S1[i]= toupper(S1[i]) ;
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

int main()
{
	string s1 = ReadString();
	s1 = UpperFirstLetterOfEachWord(s1);
	cout << s1 << endl;

	return 0;
}


