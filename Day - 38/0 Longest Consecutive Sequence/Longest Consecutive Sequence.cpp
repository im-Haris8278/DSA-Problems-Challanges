#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int max_len = 0;

        for (int num : num_set)
        {
            if (num_set.find(num - 1) == num_set.end())
            {
                int curr_len = 1;
                int curr_num = num;

                while (num_set.find(curr_num + 1) != num_set.end())
                {
                    curr_len++;
                    curr_num++;
                }

                max_len = max(max_len, curr_len);
            }
        }

        return max_len;
    }
};

int main()
{
    Solution S;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "The length of the longest consecutive elements sequence is: " << S.longestConsecutive(nums) << endl;

    return 0;
}