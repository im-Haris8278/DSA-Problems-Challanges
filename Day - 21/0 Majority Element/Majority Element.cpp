#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        int maxCount = 0, majority = -1;
        for (auto &p : freq)
        {
            if (p.second > maxCount)
            {
                maxCount = p.second;
                majority = p.first;
            }
        }

        return (maxCount > n / 2) ? majority : -1;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << S.majorityElement(nums);

    return 0;
}