#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0, count = 0;

        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        return count;
    }
};

int main(void)
{
    Solution S;
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};
    cout << S.findContentChildren(g, s);

    return 0;
}