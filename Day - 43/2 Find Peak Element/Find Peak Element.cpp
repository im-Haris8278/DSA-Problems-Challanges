#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[mid + 1])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 2, 3, 1};
    int peak = S.findPeakElement(nums);
    cout << "The Peak Element in the Input Array is: " << nums[peak] << endl;
    return 0;
}