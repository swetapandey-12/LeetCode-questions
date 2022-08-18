class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        if(nums.size()==1)
        {
         return new TreeNode(nums[0]);
            
        }
        
        int middle=nums.size()/2;
        TreeNode* root = new TreeNode(nums[middle]);
        
        vector<int> leftnum(nums.begin() , nums.begin()+middle);
        vector<int> rightnum(nums.begin()+middle+1 , nums.end());
        
        root->left =sortedArrayToBST(leftnum);
        root->right =sortedArrayToBST(rightnum);
        
       return root; 
        
    }
};
