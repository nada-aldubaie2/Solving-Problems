#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}

short printEachWorldInString(string s) {
	short counter=0;
	string delimiter = " ";

	short pos = 0;
	string sWord;

	//use find function to get the position of the delimiter
	while ((pos = s.find(delimiter)) != std::string::npos) {

		sWord = s.substr(0, pos);
		if (sWord != "") {
			counter++;
		}

		s.erase(0, pos + delimiter.length()); // erase() the storing word until postion to move to next worls
	}

	if (s != "") {
		counter++;
	}
	return counter;
}

int main()
{
	string s = ReadString();
	cout << "\n\nThe number of words in your string:"<<printEachWorldInString(s) << endl;

	return 0;
}



