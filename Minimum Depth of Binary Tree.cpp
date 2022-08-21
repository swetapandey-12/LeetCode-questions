class Solution {
public:
  int minDepth(TreeNode*, root)
  {
    if(root==NULL)
      return 0;
    if(!root->left)
      return 1+minDepth(root->right);
    if(!root->right)
      return 1+minDepth(root->left);
    else
      return 1+(minDepth(root->left),minDepth(root->right));
    
