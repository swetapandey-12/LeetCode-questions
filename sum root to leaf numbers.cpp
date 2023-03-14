class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int result =0;
        findsum(root,0,result);
        return result;
        
    }
    void findsum(TreeNode* root,int val,int &result){
        int curr= val*10+root->val;
        if(!root->left && !root->right){
            result+=curr;
            return;
        }
        if(root->left) findsum(root->left, curr, result);
        if(root->right) findsum(root->right, curr, result);
    }
};
