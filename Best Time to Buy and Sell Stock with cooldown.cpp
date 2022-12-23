class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n= prices.size();
        if(n==0)return 0;
        int result =0;
        int min ;
        int a=0;
        int b=0;
        min =prices[0];
        for(int i=0;i<n;i++){
             if (prices[i] - min>result)result = prices[i] - min;// update the result first
            if((prices[i]-b)<min)min = prices[i]-b;//update min
            b = a;
            a = result;
            
        
        }
        return result;


       
        
    }
};
