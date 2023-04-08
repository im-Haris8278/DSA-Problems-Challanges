#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int Memo(int n, vector<int> &memo)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }

        if (memo[n] != -1)
        {
            return memo[n];
        }

        memo[n] = Memo(n - 1, memo) + Memo(n - 2, memo);

        return memo[n];
    }
    int climbStairs(int n)
    {
        vector<int> memo(n + 1, -1);
        return Memo(n, memo);
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "There are " << S.climbStairs(n) << " distinct ways you can climb up the Top.";

    return 0;
}