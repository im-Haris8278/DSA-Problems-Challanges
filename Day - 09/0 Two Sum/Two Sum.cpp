#include <iostream>
#include <vector>
using namespace std;

class twoSum
{
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int requiredNum = target - nums[i];

            if (map.count(requiredNum))
            {
                return {map[requiredNum], i};
            }

            if (!map.count(nums[i]))
            {
                map[nums[i]] = i;
            }
        }
        return {};
    }
};