#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> charCount;

        for (char c : s)
        {
            charCount[c]++;
        }

        for (char c : t)
        {
            if (charCount[c] == 0 || charCount.find(c) == charCount.end())
            {
                return c;
            }
            else
            {
                charCount[c]--;
            }
        }

        return '\0';
    }
};

int main()
{
    Solution S;
    string s, t;
    cout << "Enter First String: ";
    cin >> s;
    cout << "Enter Second String: ";
    cin >> t;
    cout << S.findTheDifference(s, t);

    return 0;
}