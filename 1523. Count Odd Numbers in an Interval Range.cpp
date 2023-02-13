#time -o(n)-----------------------------------------------------------------------------------------------------
class Solution {
public:
    int countOdds(int low, int high) {
        
        int count =0;
        for(int i=low ;i<=high;i++)
        {
            if(i%2!=0)
            {
                count++;
            }
        }
        return count;
        
    }
};


#0(1)------------------------------------------------------------------------------------------------------------

 int res = (high-low)/2;
    if(low %2 != 0 || high%2 != 0)
        res++;
    return res;
