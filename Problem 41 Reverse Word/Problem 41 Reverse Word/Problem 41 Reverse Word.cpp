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

string ReverseWordsInString(string s1) {

	string s2 = "";
	vector<string> vString;

	vString = SplitString(s1, " ");

	//declare iterator

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin()) {
		--iter;
		s2 += *iter + " ";
	}

	s2= s2.substr(0, s2.length());  //remove last space
	return s2;
}

int main()
{
	string s = ReadString();

	cout << "\n\nString after reversing words: \n";
	cout << "\n"<<ReverseWordsInString(s)<<endl ;


	return 0;
}