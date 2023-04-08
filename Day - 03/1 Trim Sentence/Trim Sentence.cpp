#include <iostream>
#include <string>
using namespace std;

string trim (string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (str[start] == ' ')
    {
        start++;
    }

    while (str[end] == ' ')
    {
        end--;
    }

    return str.substr(start, end - start + 1);
}

int main()
{
    string str;
    cout << "Enter a Sentence: ";
    getline(cin, str);

    cout << "Before Trimming: " << str << endl;

    string trimmedSentence = trim(str);

    cout << "After Trimming: " << trimmedSentence << endl;

    return 0;
}