#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                result.insert(result.begin(), nums[i]);
            }
            else
            {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {3, 1, 2, 4};
    vector<int> result = S.sortArrayByParity(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}