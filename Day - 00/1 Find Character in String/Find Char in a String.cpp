#include <iostream>
#include <string>
using namespace std;

int findChar(string s, char n) {
    for ( int index = 0; index < s.length(); index++) {
        if (s[index] == n) {
            cout << index << endl;
        }
    }
}

int main() {
	string word;
	char character;
	cout << "Enter a Word: ";
	cin >> word;
	cout << "Enter a Character: ";
	cin >> character;
	findChar(word, character);
	
	return 0;
}
