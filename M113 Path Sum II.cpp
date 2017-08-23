class Solution
{
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum)
    {
        int num=0;
        vector<vector<int>> res;
        vector<vector<int>> ans;
        if (root==NULL)
            return res;
        vector<int> a;
        a.push_back(root->val);
        TreePaths(res, root, a);
        for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            num=num+res[i][j];
        }
        if(num==sum)
            ans.push_back(res[i]);
        num=0;
    }
        return ans;
    }

    void TreePaths(vector<vector<int>>& result, TreeNode* node, vector<int> s)
    {

        if (node->left==NULL && node->right==NULL)
        {
            result.push_back(s);

            return;
        }
        if (node->left)
        {
            s.push_back(node->left->val);
            TreePaths(result, node->left, s);
            s.pop_back();
        }
        if (node->right)
        {
            s.push_back(node->right->val);
            TreePaths(result, node->right, s);
            s.pop_back();
        }
    }

};
