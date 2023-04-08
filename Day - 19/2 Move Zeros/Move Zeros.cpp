#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }

        while (j < nums.size())
        {
            nums[j] = 0;
            j++;
        }
    }
};

int main()
{
    Solution S;
    vector<int> nums = {0, 1, 0, 3, 12};
    S.moveZeroes(nums);

    return 0;
}