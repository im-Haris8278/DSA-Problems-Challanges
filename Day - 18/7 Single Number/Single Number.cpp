#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int num : nums)
        {
            result ^= num;
        }

        return result;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << S.singleNumber(nums);

    return 0;
}