#include <iostream>
using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int countL = 0;
        int countR = 0;
        int ans = 0;

        for (int c = 0; c < s.size(); c++)
        {
            if (c == 'L')
                countL++;

            else if (c == 'R')
                countR++;

            if (countL == countR)
                ans++;
        }

        return ans;
    }
};

int main(void)
{
    Solution S;
    string s;
    cout << "Enter a String: ";
    cin >> s;
    cout << S.balancedStringSplit(s);

    return 0;
}