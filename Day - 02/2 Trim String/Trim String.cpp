#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string trimSentence(string sentence)
{
    auto start = sentence.begin();
    auto end = sentence.end() - 1;

    while (start < end && isspace(*start))
    {
        start++;
    }

    while (end > start && isspace(*end))
    {
        end--;
    }

    cout << string(start, end + 1);
}

int main()
{
    string sentence = "     Hello World     ";

    trimSentence(sentence);

    return 0;
}