#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> freq;

        for (char c : s)
        {
            freq[c]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution S;
    string s;
    cout << "Enter a String: ";
    cin >> s;
    cout << "First Unique Character of String at Index: " << S.firstUniqChar(s);

    return 0;
}