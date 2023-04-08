#include <iostream>
#include <vector>
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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> result;
        if (!root)
        {
            return result;
        }
        postorder(root, result);
        return result;
    }

private:
    void postorder(TreeNode *root, vector<int> &result)
    {
        if (!root)
        {
            return;
        }
        postorder(root->left, result);
        postorder(root->right, result);
        result.push_back(root->val);
    }
};

int main(void)
{
    Solution S;

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(5);

    vector<int> res = S.postorderTraversal(root);
    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}