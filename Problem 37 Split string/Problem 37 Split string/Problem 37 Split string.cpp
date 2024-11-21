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

int main()
{
	vector<string> vString;
		
	vString = (SplitString(ReadString(), "#"));
	cout << "\n\nTokens = " << vString.size() << endl;

	for (string& s: vString) {
		cout << s<< endl;
	}

	return 0;
}



