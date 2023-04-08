#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, result, current, 0);
        return result;
    }

    void backtrack(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> &current, int index)
    {
        if (target == 0)
        {
            result.push_back(current);
            return;
        }

        for (int i = index; i < candidates.size() && target >= candidates[i]; i++)
        {
            if (i == index || candidates[i] != candidates[i - 1])
            {
                current.push_back(candidates[i]);
                backtrack(candidates, target - candidates[i], result, current, i + 1);
                current.pop_back();
            }
        }
    }
};

int main()
{
    Solution S;
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> res = S.combinationSum2(candidates, target);

    for (vector<int> v : res)
    {
        cout << "[ ";
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}