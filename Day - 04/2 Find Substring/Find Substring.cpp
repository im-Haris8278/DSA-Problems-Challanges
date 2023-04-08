#include <iostream>
#include <string>
using namespace std;

void FindSubstring(string str, str word)
{
    int length = word.length();
    int index = -1;

    for (int i = 0; i < str.length() - length + 1; i++)
    {
        if (str[i] == word[0])
        {
            int j = i;
            int found = 0;

            while (j < i + length && str[j] == word[j - i])
            {
                found++;
                j++;
            }
            if (found == length)
            {
                index = i;
            }
        }
    }

    if (index != -1)
    {
        cout << "Found " << word << "at Index " << index << "."
    }
    else
    {
        cout << "Could Not Found " << word << "in The Given Input." << endl;
    }
}

int main()
{
    string str, word;

    cout << "Enter a String: ";
    getline(cin, str);

    cout << "Enter a Word to Find: ";
    getline(cin, word);

    find_word(str, word);

    return 0;
}