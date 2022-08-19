Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as:
a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

class Solution {
public:
    int height (TreeNode* root){
        if(root==NULL)
            return 0;
        else
            return max(height(root->left), height(root->right))+1;
    }
    
    void inorder(TreeNode* root, bool & ans){
        
        if(root!=NULL){
            inorder(root->left, ans);
            
            int lh =height(root->left);
            int rh = height(root->right);
            
            if(abs(lh-rh)>1)
                ans = ans && false;
            
            
            inorder(root->right,ans);
        }
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorder(root,ans);
        return ans;
        
        
        
    }
};
