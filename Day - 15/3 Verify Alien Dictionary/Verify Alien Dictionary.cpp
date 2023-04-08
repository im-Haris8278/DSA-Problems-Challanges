#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        int charMap[26] = {};

        for (int i = 0; i < order.length(); i++)
        {
            charMap[order[i] - 'a'] = i;
        }

        for (int i = 0; i < words.size() - 1; i++)
        {

            string curr = words[i];
            string next = words[i + 1];

            int minLength = min(curr.length(), next.length());

            for (int j = 0; j < minLength; j++)
            {

                if (curr[j] != next[j])
                {
                    if (charMap[curr[j] - 'a'] > charMap[next[j] - 'a'])
                    {
                        return false;
                    }
                    else
                    {
                        break;
                    }
                }
                if (j == minLength - 1 && curr.length() > next.length())
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(void)
{
    Solution S;
    vector<string> words = {"hello", "leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout << S.isAlienSorted(words, order);

    return 0;
}