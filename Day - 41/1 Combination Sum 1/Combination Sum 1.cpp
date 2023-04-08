#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, path, result);
        return result;
    }

private:
    void backtrack(vector<int> &candidates, int target, int start, vector<int> &path, vector<vector<int>> &result)
    {
        if (target < 0)
        {
            return;
        }
        else if (target == 0)
        {
            result.push_back(path);
            return;
        }
        else
        {
            for (int i = start; i < candidates.size(); i++)
            {
                if (i > start && candidates[i] == candidates[i - 1])
                {
                    continue;
                }
                path.push_back(candidates[i]);
                backtrack(candidates, target - candidates[i], i, path, result);
                path.pop_back();
            }
        }
    }
};

int main()
{
    Solution S;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> res = S.combinationSum(candidates, target);

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
