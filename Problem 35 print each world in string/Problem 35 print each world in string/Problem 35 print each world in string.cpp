#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}

void printEachWorldInString(string s) {
	string delimiter = " ";
	cout << "\n\nYour string words are:\n\n";

	short pos = 0;
	string sWord; 

	//use find function to get the position of the delimiter
	while ((pos = s.find(delimiter)) != std::string::npos) {

		sWord = s.substr(0, pos);
		if (sWord != "") {
			cout << sWord << endl;
		}

		s.erase(0, pos + delimiter.length()); // erase() the storing word until postion to move to next worls
	}

	if (s != "") {
		cout << s << endl; // print last word in string
	}
}

int main()
{
	printEachWorldInString(ReadString());

	return 0;
}



