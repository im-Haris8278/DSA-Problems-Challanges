#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<long long>> dp(m, vector<long long>(n, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    dp[i][j] = 0;
                }
                else if (i == 0 && j == 0)
                {
                    dp[i][j] = 1;
                }
                else if (i == 0)
                {
                    dp[i][j] = dp[i][j - 1];
                }
                else if (j == 0)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};

int main()
{
    Solution S;
    vector<vector<int>> obstacleGrid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}};

    int result = S.uniquePathsWithObstacles(obstacleGrid);
    cout << "Number of Unique Paths: " << result << endl;

    return 0;
}