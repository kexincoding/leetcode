
 class Solution {
 public:
	 vector<int> inorderTraversal(TreeNode* root) {
		 stack<TreeNode*> s;
		 vector<int> res;
		 if (root == NULL)
			 return res;
		 TreeNode* p=root;
		 while (p!=NULL || !s.empty())
		 {
			 while (p!=NULL)
			 {
				 s.push(p);
				 p = p->left;
			 }
			 if (!s.empty())
			 {
				 p = s.top();
				 s.pop();
				 res.push_back(p->val);
				 p = p->right;
			 }
		 }
		 return res;
	 }
 };
