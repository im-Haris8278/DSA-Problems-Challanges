#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (numMap.find(nums[i]) != numMap.end() && i - numMap[nums[i]] <= k)
            {
                return true;
            }
            numMap[nums[i]] = i;
        }

        return false;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    cout << S.containsNearbyDuplicate(nums, k);

    return 0;
}