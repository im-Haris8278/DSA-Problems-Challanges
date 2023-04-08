#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int minElement = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < minElement)
            {
                minElement = nums[i];
            }
        }
        return minElement;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "The Minimum Number is: " << S.findMin(nums);

    return 0;
}