#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0;
        int j = s.size() - 1;

        while (i < j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

int main()
{
    Solution S;
    vector<char> s = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    S.reverseString(s);
    for (auto c : s)
    {
        cout << c;
    }

    return 0;
}