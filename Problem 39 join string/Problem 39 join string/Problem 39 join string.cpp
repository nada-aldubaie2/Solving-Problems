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

string JoinString(vector<string> vString , string delimiter) {

	string S1 = "";

	for (string& s : vString) {
		S1 = S1 + s + delimiter;
	}
	return S1.substr(0, S1.length() - delimiter.length());  //to not add delimitor at the end of the string
	
}

int main()
{
	vector<string> vString = { "Nada", "Aldubaie" ,"Software", "Engineer" };

	cout << "\nVector after join: \n\n";
	cout<< JoinString(vString, "$") <<endl;

	

	return 0;
}



