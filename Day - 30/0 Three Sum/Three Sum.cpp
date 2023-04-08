#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        ++j;
                    }
                    while (j < k && nums[k] == nums[k + 1])
                    {
                        --k;
                    }
                }
                else if (sum < 0)
                {
                    ++j;
                }
                else
                {
                    --k;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = S.threeSum(nums);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}