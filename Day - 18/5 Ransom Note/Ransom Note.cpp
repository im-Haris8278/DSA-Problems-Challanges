#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> charCount;

        for (char c : magazine)
        {
            charCount[c]++;
        }

        for (char c : ransomNote)
        {
            if (charCount[c] == 0)
            {
                return false;
            }
            charCount[c]--;
        }

        return true;
    }
};

int main()
{
    Solution S;
    string ransomNote, magazine;
    cout << "Enter a Ransom Note: ";
    cin >> ransomNote;
    cout << "Enter a Magazine: ";
    cin >> magazine;
    cout << S.canConstruct(ransomNote, magazine);

    return 0;
}