#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int changeRecursive(int amount, vector<int> &coins, vector<vector<int>> &memo, int i)
    {
        if (amount == 0)
        {
            return 1;
        }
        if (amount < 0 || i == coins.size())
        {
            return 0;
        }

        if (memo[amount][i] != -1)
        {
            return memo[amount][i];
        }

        int include = changeRecursive(amount - coins[i], coins, memo, i);
        int exclude = changeRecursive(amount, coins, memo, i + 1);

        memo[amount][i] = include + exclude;

        return memo[amount][i];
    }

    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> memo(amount + 1, vector<int>(coins.size(), -1));

        return changeRecursive(amount, coins, memo, 0);
    }
};

int main()
{
    Solution S;
    int amount = 5;
    vector<int> coins = {1, 2, 5};
    cout << S.change(amount, coins) << endl;

    return 0;
}