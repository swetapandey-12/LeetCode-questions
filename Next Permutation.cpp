class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==0)
        {
            return ;
        }
        int indx1 ;
        for(int i =nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                indx1 = i;
                break;
              }
        }
        if(indx1<0)
        {
            reverse(nums.begin(),nums.end());
        }else
         {
             int indx2;
             for(int i = nums.size()-1;i>=0;i--)
               {
                  if(nums[i]>nums[indx1])
                    {
                        indx2 = i;
                        break;
                     }
                }
                swap(nums[indx1],nums[indx2]);
                reverse(nums.begin()+indx1+1, nums.end());    
        }
        
    }
};
