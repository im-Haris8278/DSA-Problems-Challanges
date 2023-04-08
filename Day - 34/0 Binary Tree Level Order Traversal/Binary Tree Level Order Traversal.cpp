#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
        {
            return result;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int level_size = q.size();
            vector<int> level_values;

            for (int i = 0; i < level_size; i++)
            {
                TreeNode *curr_node = q.front();
                q.pop();
                level_values.push_back(curr_node->val);

                if (curr_node->left)
                {
                    q.push(curr_node->left);
                }

                if (curr_node->right)
                {
                    q.push(curr_node->right);
                }
            }

            result.push_back(level_values);
        }

        return result;
    }
};

int main()
{
    Solution S;

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> level_order = S.levelOrder(root);

    for (auto &level_values : level_order)
    {
        cout << "[ ";
        for (auto &val : level_values)
        {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}