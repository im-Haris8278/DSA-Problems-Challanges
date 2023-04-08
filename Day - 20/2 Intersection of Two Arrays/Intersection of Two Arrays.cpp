#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> Set(nums1.begin(), nums1.end());

        vector<int> result;

        for (int num : nums2)
        {
            if (Set.count(num) > 0)
            {
                result.push_back(num);
                Set.erase(num);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    Solution S;
    vector<int> result = S.intersection(nums1, nums2);
    cout << "The Resultant Numbers are: ";
    for (int num : result)
    {
        cout << num << ", ";
    }

    return 0;
}
