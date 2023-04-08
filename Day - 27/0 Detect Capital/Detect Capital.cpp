#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int n = word.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (isupper(word[i]))
            {
                count++;
            }
        }

        int result = count == 0 || count == n || (count == 1 && isupper(word[0]));

        return result;
    }
};

int main()
{
    Solution S;
    string word;
    cout << "Enter a Word: ";
    cin >> word;
    cout << S.detectCapitalUse(word);

    return 0;
}