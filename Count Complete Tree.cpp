/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        int countNodes(TreeNode* root) {
        if(root == NULL) return 0; 
        
        int lh = LeftHeight(root); 
        int rh = RightHeight(root); 
        
        if(lh == rh) return (1<<lh) - 1; 
        
        return 1 + countNodes(root->left) + countNodes(root->right); 
    }
    int LeftHeight(TreeNode* node) {
        int hlt = 0; 
        while(node) {
            hlt++; 
            node = node->left; 
        }
        return hlt; 
    }
    int RightHeight(TreeNode* node) {
        int hlt = 0; 
        while(node) {
            hlt++; 
            node = node->right; 
        }
        return hlt; 
    }
};
