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
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return -1;
        int num=0,ans=0;
        midorder(root, k,num,ans);
        return ans;
    }

    void midorder(TreeNode* t, int k,int &num,int &ans)
    {
        if(t!=NULL)
        {

            if(t->left)
                midorder(t->left, k,num,ans);
            num++;
            if(num==k)
            {
                ans=t->val;
                return;
            }

            if(t->right)
                midorder(t->right, k,num,ans);
        }

    }
};
