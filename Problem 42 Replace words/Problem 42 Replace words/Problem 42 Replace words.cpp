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

string ReplaceWordInStringUsingBuiltinFunction(string s, string stringToReplace, string sReplaceTo) {

	short pos = s.find(stringToReplace);
	
	while (pos != std::string::npos) {

		s = s.replace(pos, stringToReplace.length(), sReplaceTo);
		pos = s.find(stringToReplace);//find next
	}

	return s;
}

int main()
{
	string s = "Welcome to Yemen, Yemen is a nice country";
	string stringToReplace = "Yemen";
	string ReplaceTo = "Palestine";

	cout << "\nOrignal string is:\n"<<s;
	cout << "\n\nString after replace is:\n";

	cout << "\n" << ReplaceWordInStringUsingBuiltinFunction(s, stringToReplace, ReplaceTo) << endl;


	return 0;
}