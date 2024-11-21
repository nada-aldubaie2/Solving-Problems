#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string S1;
	cout << "please Enter your string:\n";
	getline(cin, S1);
	return S1;
}

string UpperAllString(string S1) {

	for (short i = 0; i < S1.length(); i++) {
		S1[i] = toupper(S1[i]);
	}
	return S1;
}

string LowerAllString(string S1) {

	for (short i = 0; i < S1.length(); i++) {
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

int main()
{
	string s1 = ReadString();

	cout << "\nString after Upper:\n";
	s1 = UpperAllString(s1);
	cout << s1 << endl;

	cout << "\nString after Lower:\n";
	s1 = LowerAllString(s1);
	cout << s1 << endl;

	return 0;
}


