class Solution {
public:
    int minsumsubarr(vector<int>& nums)
    {
        int minsum=INT_MAX;
        int currentsum =0;
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            currentsum =currentsum+nums[i];
            minsum =min(minsum,currentsum);
            if(currentsum>0)
            {
                currentsum=0;
            }
            
        }
        return minsum;
    }
    int maxsumsubarr(vector<int>& nums)
    {
        int maxsum=INT_MAX;
        int currentsum =0;
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            currentsum =currentsum+nums[i];
            maxsum =max(maxsum,currentsum);
            if(currentsum<0)
            {
                currentsum=0;
            }
        }
        return maxsum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int x =1;
        int ans =INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                x=0;
                break;
            }
            ans=max(ans,nums[i]);
        }
        if(x) return ans;

        // case 1
        int ans1 =maxsumsubarr(nums);
        cout<<ans1<<" ";

        // case2
        int arraysum=0;
        for(int i=0;i<nums.size();i++)
        {
            arraysum+=nums[i];
        }
        int ans2 =arraysum-minsumsubarr(nums);
        {
            cout<<ans2<<" ";
        }

        return max(ans1,ans2);
        
    }
};
