#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int minElement = nums[0];

        for (int index = 0; index < nums.size(); index++)
        {
            if (nums[index] < minElement)
                minElement = nums[index];
        }

        return minElement;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << S.findMin(nums);

    return 0;
}