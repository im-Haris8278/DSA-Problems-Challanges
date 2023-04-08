#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec
{
public:
    string serialize(TreeNode *root)
    {
        if (root == NULL)
        {
            return "null";
        }
        string str = "";
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node == NULL)
            {
                str += "null,";
            }
            else
            {
                str += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            }
        }

        return str;
    }

    TreeNode *deserialize(string data)
    {
        if (data == "null")
        {
            return NULL;
        }
        stringstream ss(data);
        string nodeValue;
        getline(ss, nodeValue, ',');
        TreeNode *root = new TreeNode(stoi(nodeValue));
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            getline(ss, nodeValue, ',');
            if (nodeValue != "null")
            {
                node->left = new TreeNode(stoi(nodeValue));
                q.push(node->left);
            }
            getline(ss, nodeValue, ',');
            if (nodeValue != "null")
            {
                node->right = new TreeNode(stoi(nodeValue));
                q.push(node->right);
            }
        }

        return root;
    }

    void inorderTraversal(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
};

int main()
{
    Codec codec;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    // Serialize the Tree
    string serialized = codec.serialize(root);
    cout << "Serialized tree: " << serialized << endl;

    // Deserialize the Tree
    TreeNode *deserialized = codec.deserialize(serialized);

    // Print the Inorder Traversal of the Deserialized Tree to Verify it's Correct
    cout << "Inorder traversal of deserialized tree: ";
    codec.inorderTraversal(deserialized);
    cout << endl;

    return 0;
}