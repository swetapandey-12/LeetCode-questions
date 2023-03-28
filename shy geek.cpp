class Solution{
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        long long ans = 0;
        
        int mid = n;
        while(1){
            int low = 0, high = mid-1;
            // we are setting high to mid-1 becasue in 
            // last search, we have got the desired chocolate
            // and we have already included maximum instances of 
            // it so there's no way that we'll ever be able to buy it again
            
            int cost = -1; 
            while(low <= high){
                mid = (low+high)/2;
                int curCost = shop.get(mid);
                if(curCost > cost && curCost <= k){ // desired chocolate found
                    cost = curCost; 
                    low = mid+1;
                }
                else
                    high = mid-1;
            }
            
            if(cost == -1 || cost > k) //the remaining cost k isn't 
                break;                 // enough to buy any chocolate so break
            
            ans += k/cost; //take all instances of the selected chocolate
            k %= cost;     //reduce the remaining cost
        }
    
        return ans;
    }

};
