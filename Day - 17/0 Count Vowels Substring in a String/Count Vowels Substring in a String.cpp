#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int countVowelSubstrings(string word)
    {
        if (word.length() <= 4)
        {
            return false;
        }

        int totalVowelSubStr = 0;

        unordered_set<char> counter;

        for (int i = 0; i < word.length() - 4; i++)
        {
            counter.clear();
            for (int j = i; j < word.length(); j++)
            {
                char ch = word[j];
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    counter.insert(ch);
                    if (counter.size() == 5)
                    {
                        totalVowelSubStr++;
                    }
                }
                else
                {
                    break;
                }
            }
        }

        return totalVowelSubStr;
    }
};

int main()
{
    Solution S;
    string word;
    cout << "Enter a String: ";
    cin >> word;
    cout << S.countVowelSubstrings(word);

    return 0;
}