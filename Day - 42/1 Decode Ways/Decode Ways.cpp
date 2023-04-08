#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int numDecodings(string s)
    {
        int n = s.length();
        if (n == 0 || s[0] == '0')
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        int prev = 1, curr = 1;
        for (int i = 1; i < n; i++)
        {
            int temp = curr;
            if (s[i] == '0')
            {
                if (s[i - 1] == '1' || s[i - 1] == '2')
                {
                    curr = prev;
                }
                else
                {
                    return 0;
                }
            }
            else if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6'))
            {
                curr = curr + prev;
            }
            prev = temp;
        }
        return curr;
    }
};

int main()
{
    Solution S;
    string input = "226";
    int result = S.numDecodings(input);
    cout << "The Number of Possible Decodings for " << input << " is: " << result << endl;
    return 0;
}