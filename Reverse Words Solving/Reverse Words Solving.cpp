#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence;
	cout <<"Enter a sentence: ";
	getline(cin, sentence);

	// reverse each word
	string reversed_sentence = "";
	string word;
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == ' ') {
			// reverse the previous word and add it to the reversed sentence
			string reversed_word = "";
			for (int j = word.length() - 1; j >= 0; j--) {
				reversed_word += word[j];
			}
			reversed_sentence += reversed_word + ' ';
			word = "";
		}
		else {
			// add the current character to the current word
			word += sentence[i];
		}
	}

	// reverse the last word and add it to the reversed sentence
	string reversed_word = "";
	for (int j = word.length() - 1; j >= 0; j--) {
		reversed_word += word[j];
	}
	reversed_sentence += reversed_word;

	cout << "Reversed sentence: " << reversed_sentence << endl;

	return 0;
}