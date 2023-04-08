#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        auto min = min_element(nums.begin(), nums.end());
        return *min;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {1, 3, 5};
    cout << "The Minimum Number is: " << S.findMin(nums);

    return 0;
}