#include <iostream>
#include <string>
using namespace std;

int wordsCount(string s)
{
    int count = 0;
    bool words = false;
    for (char c : s)
    {
        if (c == ' ' && words)
        {
            count++;
            words = false;
        }
        else if (c != ',' && c != ' ')
        {
            words = true;
        }
    }
    if (words)
    {
        count++;
    }
    return count;
}

int main()
{
    string s = "Hello,    World";
     cout << "Enter a String: ";
     getline(cin, s);

    cout << "Number of Words are: ";
    printf("%d", wordsCount(s));
    return 0;
}