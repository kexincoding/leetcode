/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (root==NULL)   return res;
        TreePaths(res, root, to_string(root->val));
        return res;
    }

    void TreePaths(vector<string>& result, TreeNode* node, string s) {
        if (node->left==NULL && node->right==NULL)
        {
            result.push_back(s);
            return;
        }
        if (node->left)     TreePaths(result, node->left, s + "->" + to_string(node->left->val));
        if (node->right)    TreePaths(result, node->right, s + "->" + to_string(node->right->val));
    }
};
