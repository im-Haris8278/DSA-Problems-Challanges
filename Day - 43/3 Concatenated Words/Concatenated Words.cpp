#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
    {
        vector<string> result;
        unordered_set<string> dict(words.begin(), words.end());
        for (const string &word : words)
        {
            int n = word.size();
            vector<bool> dp(n + 1, false);
            dp[0] = true;
            for (int i = 0; i < n; i++)
            {
                if (!dp[i])
                {
                    continue;
                }
                for (int j = i + 1; j <= n; j++)
                {
                    if (j - i < n && dict.count(word.substr(i, j - i)))
                    {
                        dp[j] = true;
                    }
                }
                if (dp[n])
                {
                    result.push_back(word);
                    break;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution S;
    vector<string> words = {"cat", "cats", "catsdogcats", "dog", "dogcatsdog", "hippopotamuses", "rat", "ratcatdogcat"};
    vector<string> result = S.findAllConcatenatedWordsInADict(words);
    cout << "The Concatenated Words in the Input Vector are:" << endl;
    for (const string &word : result)
    {
        cout << word << endl;
    }
    return 0;
}