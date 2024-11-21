#include <iostream>
#include <string>
#include <vector>
using namespace std;


string JoinString(vector<string> vString, string delimiter) {

	string S1 = "";

	for (string& s : vString) {
		S1 = S1 + s + delimiter;
	}
	return S1.substr(0, S1.length() - delimiter.length());  //to not add delimitor at the end of the string

}

string JoinString(string arrString[], short length, string delimiter) {

	string S1 = "";

	for (short i = 0; i < length; i++ ) {
		S1 = S1 + arrString[i] + delimiter;
	}
	return S1.substr(0, S1.length() - delimiter.length());  //to not add delimitor at the end of the string
}

int main()
{
	vector<string> vString = { "Nada", "Aldubaie" ,"Software", "Engineer" };
	string arrString[] = { "Nada", "Aldubaie" ,"Software", "Engineer" };

	cout << "\nVector after join: \n";
	cout << JoinString(vString, "$$$") << endl;

	cout << "\n\nArray after join: \n";
	cout << JoinString(arrString, 4, " ") << endl;

	return 0;
}