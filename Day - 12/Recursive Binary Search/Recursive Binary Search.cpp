#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[mid] < target)
        {
            return binarySearch(nums, target, mid + 1, right);
        }

        if (nums[mid] > target)
        {
            return binarySearch(nums, target, left, mid - 1);
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 7;
    int left = 1;
    int right = nums.size() - 1;
    int result = binarySearch(nums, target, left, right);

    if (result == -1)
    {
        cout << "Target not Found." << endl;
    }
    else
    {
        cout << "Target Found at Index: " << result << endl;
    }

    return 0;
}