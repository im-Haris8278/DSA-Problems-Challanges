#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return nums[0];
        }

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n - 1];
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 2, 3, 1};
    cout << "Maximum Amount of Money you can Rob without alerting the Police: " << S.rob(nums) << endl;

    return 0;
}