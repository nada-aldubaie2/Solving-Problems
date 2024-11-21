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

vector<string> SplitString(string s, string delimiter) {

	vector<string> vString;

	short pos = 0;
	string sWord;

	//use find function to get the position of the delimiter
	while ((pos = s.find(delimiter)) != std::string::npos) {

		sWord = s.substr(0, pos);
		if (sWord != "") {
			vString.push_back(sWord);
		}

		s.erase(0, pos + delimiter.length()); // erase() the storing word until postion to move to next worls
	}

	if (s != "") {
		vString.push_back(s);
	}
	return vString;
}

string JoinString(vector<string> vString, string delimiter) {

	string S1 = "";

	for (string& s : vString) {
		S1 = S1 + s + delimiter;
	}
	return S1.substr(0, S1.length() - delimiter.length());  //to not add delimitor at the end of the string

}

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string ReplaceWordInStringUsingSplit(string s, string stringToReplace, string sReplaceTo, bool MatchCase = true) {

	vector<string>vString = SplitString(s, " ");

	for (string& s : vString) {
		if (MatchCase) {
			if (s == stringToReplace) {
				s = sReplaceTo;
			}
		}
		else {
			if (LowerAllString(s) == LowerAllString(stringToReplace)) {
				s = sReplaceTo;
			}
		}
	}
	return JoinString(vString, " ");
}

int main()
{
	string s = "Welcome to Yemen , Yemen is a nice country";
	string stringToReplace = "yemen";
	string ReplaceTo = "Palestine";

	cout << "\nOrignal string is:\n" << s;

	cout << "\n\nReplace with Match case:\n";
	cout << ReplaceWordInStringUsingSplit(s, stringToReplace, ReplaceTo) << endl;

	cout << "\n\nReplace without Match case:\n";
	cout << ReplaceWordInStringUsingSplit(s, stringToReplace, ReplaceTo, false) << endl;


	return 0;
}
