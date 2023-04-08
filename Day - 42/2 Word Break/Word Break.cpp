#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int n = s.length();
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end())
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution S;
    string input = "leetcode";
    vector<string> dict = {"leet", "code"};
    bool result = S.wordBreak(input, dict);
    if (result)
    {
        cout << "The String \"" << input << "\" can be Segmented into Dictionary Words." << endl;
    }
    else
    {
        cout << "The String \"" << input << "\" cannot be Segmented into Dictionary Words." << endl;
    }
    return 0;
}