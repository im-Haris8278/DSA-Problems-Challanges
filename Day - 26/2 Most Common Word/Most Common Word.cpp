#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    string mostCommonWord(string paragraph, vector<string> &banned)
    {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        string word, mostFreqWord;
        int maxFreq = 0;
        for (int i = 0; i < paragraph.size(); ++i)
        {
            if (isalpha(paragraph[i]))
            {
                word += tolower(paragraph[i]);
            }
            else if (word.size())
            {
                if (!ban.count(word))
                {
                    ++freq[word];
                    if (freq[word] > maxFreq)
                    {
                        maxFreq = freq[word];
                        mostFreqWord = word;
                    }
                }
                word.clear();
            }
        }
        if (word.size() && !ban.count(word))
        {
            ++freq[word];
            if (freq[word] > maxFreq)
            {
                maxFreq = freq[word];
                mostFreqWord = word;
            }
        }
        return mostFreqWord;
    }
};

int main()
{
    Solution S;
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
	vector<string> banned {"hit"};
    cout << S.mostCommonWord(paragraph, banned);

    return 0;
}