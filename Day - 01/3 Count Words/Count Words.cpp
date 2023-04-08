#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input = "Hello World";
    int wordCount = 0;
    // cout << "Enter a String: ";
    // cin >> input;

    for (int index = 0; index < input.length(); index++)
    {
        if (input[index] == ' ' || index == input.length() - 1)
        {
            wordCount++;
        }
    }
    cout << "Words Count is: " << wordCount << endl;

    return 0;
}