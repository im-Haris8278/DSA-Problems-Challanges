#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> result;
        if (digits.empty())
        {
            return result;
        }
        vector<string> mapping = {
            "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string current = "";
        letterCombinationsHelper(digits, result, mapping, current, 0);
        return result;
    }

private:
    void letterCombinationsHelper(const string &digits, vector<string> &result, const vector<string> &mapping, string &current, int index)
    {
        if (index == digits.size())
        {
            result.push_back(current);
            return;
        }
        string letters = mapping[digits[index] - '0'];
        for (char c : letters)
        {
            current.push_back(c);
            letterCombinationsHelper(digits, result, mapping, current, index + 1);
            current.pop_back();
        }
    }
};

int main()
{
    Solution S;
    string digits = "23";
    vector<string> combinations = S.letterCombinations(digits);
    cout << "Possible Letter Combinations for " << digits << " are: " << endl;
    for (const string &combination : combinations)
    {
        cout << combination << endl;
    }
    return 0;
}