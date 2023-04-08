#include <iostream>
#include <string>
using namespace std;

int printCharactersInString( string word ) {
    for ( int index = 0; index < word.length(); index++) {
        cout << word[index] << endl;
    }
    return -1;
}

int main() {
    string word;
    cout << "Enter a String: ";
    cin >> word;

    printCharactersInString(word);

    return 0;
}