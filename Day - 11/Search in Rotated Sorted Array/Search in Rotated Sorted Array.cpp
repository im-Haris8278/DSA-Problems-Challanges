#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {6, 4, 0, 5, 1, 8, 4, 9};
    int target = 5;
    cout << S.search(nums, target);

    return 0;
}