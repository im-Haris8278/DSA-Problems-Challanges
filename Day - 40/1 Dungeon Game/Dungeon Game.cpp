#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int calculateMinimumHP(vector<vector<int>> &dungeon)
    {
        int m = dungeon.size();
        int n = dungeon[0].size();

        vector<vector<int>> dp(m, vector<int>(n));

        dp[m - 1][n - 1] = max(1, 1 - dungeon[m - 1][n - 1]);

        for (int i = m - 2; i >= 0; i--)
        {
            dp[i][n - 1] = max(1, dp[i + 1][n - 1] - dungeon[i][n - 1]);
        }

        for (int j = n - 2; j >= 0; j--)
        {
            dp[m - 1][j] = max(1, dp[m - 1][j + 1] - dungeon[m - 1][j]);
        }

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = n - 2; j >= 0; j--)
            {
                int down = max(1, dp[i + 1][j] - dungeon[i][j]);
                int right = max(1, dp[i][j + 1] - dungeon[i][j]);
                dp[i][j] = min(down, right);
            }
        }

        return dp[0][0];
    }
};

int main()
{
    Solution S;
    vector<vector<int>> dungeon = {
        {-2, -3, 3},
        {-5, -10, 1},
        {10, 30, -5}};

    int result = S.calculateMinimumHP(dungeon);
    cout << "Minimum Initial Health Required: " << result << endl;

    return 0;
}