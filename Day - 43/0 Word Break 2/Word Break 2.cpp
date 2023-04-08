#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<vector<int>> dp(s.size() + 1);
        dp[0].push_back(-1);
        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (dp[j].size() && dict.count(s.substr(j, i - j)))
                {
                    dp[i].push_back(j);
                }
            }
        }
        vector<string> res;
        vector<string> path;
        dfs(s, dp, s.size(), path, res);
        return res;
    }

    void dfs(string &s, vector<vector<int>> &dp, int end, vector<string> &path, vector<string> &res)
    {
        if (end == 0)
        {
            string tmp;
            for (int i = path.size() - 1; i >= 0; i--)
            {
                tmp += path[i] + " ";
            }
            tmp.pop_back();
            res.push_back(tmp);
            return;
        }
        for (int i = 0; i < dp[end].size(); i++)
        {
            int start = dp[end][i];
            path.push_back(s.substr(start, end - start));
            dfs(s, dp, start, path, res);
            path.pop_back();
        }
    }
};

int main()
{
    Solution S;
    string s = "catsanddog";
    vector<string> wordDict = {"cat", "cats", "and", "sand", "dog"};
    vector<string> result = S.wordBreak(s, wordDict);
    for (const auto &res : result)
    {
        cout << res << endl;
    }
    return 0;
}
