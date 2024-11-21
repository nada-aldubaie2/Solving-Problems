#include <iostream>
#include <string>
using namespace std;

string ReadString() {
	string s;
	cout << "please Enter your String:\n";
	getline(cin, s);
	return s;
}

enum enWhatToCount{SmallLetters = 0, CapitalLetters = 1, All = 2};

short CountLetters(string s, enWhatToCount whatToCount=enWhatToCount::All) {
	short counter = 0;

	if (whatToCount == enWhatToCount::All)
		return s.length();

	for (int i = 0; i < s.length(); i++)
		if (whatToCount==enWhatToCount::CapitalLetters && isupper(s[i]))
			counter++;
		else if(whatToCount == enWhatToCount::SmallLetters && islower(s[i]))
			counter++;

	return counter;

}
short CountCapitalLetters(string s) {
	short counter = 0;

	for (int i = 0; i < s.length(); i++)
		if (isupper(s[i]))
			counter++;

	return counter;
}

short CountSmallLetters(string s) {
	short counter = 0;

	for (int i = 0; i < s.length(); i++)
		if (islower(s[i]))
			counter++;

	return counter;
}


int main()
{
	string s = ReadString();
	cout << "\nString length ="<< CountLetters(s);
	cout << "\n\nCapital letters Count is = " << CountLetters(s, enWhatToCount::CapitalLetters);
	cout << "\n\nSmall letters Count is = " << CountLetters(s, enWhatToCount::SmallLetters)<<endl;


	cout << "\n\n\n=============== Another Way: =================\n";

	cout << "\nString length ="<< s.length();
	cout << "\n\nCapital letters Count is = " << CountCapitalLetters(s);
	cout << "\n\nCapital letters Count is = " << CountSmallLetters(s)<<endl;
	
	return 0;
}



