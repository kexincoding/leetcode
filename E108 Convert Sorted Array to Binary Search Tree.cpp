TreeNode *buildBST(vector<int> &num, int i, int j) {
  if (i > j)
    return NULL;

  int m = (i + j) /2;
  TreeNode *node = new TreeNode(num[m]);
  node->left = buildBST(num, i, m - 1);
  node->right = buildBST(num, m + 1, j);

  return node;
}

TreeNode *sortedArrayToBST(vector<int> &num) {
  return buildBST(num, 0, num.size() - 1);
}
