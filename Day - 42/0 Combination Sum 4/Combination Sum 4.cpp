#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<double> dp(target + 1);
        dp[0] = 1;

        for (int i = 1; i <= target; i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i >= nums[j])
                {
                    dp[i] += dp[i - nums[j]];
                }
            }
        }

        return dp[target];
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 2, 3};
    int target = 4;

    int result = S.combinationSum4(nums, target);

    cout << "The Number of Combinations that Add Up to " << target << " is: " << result << endl;

    return 0;
}