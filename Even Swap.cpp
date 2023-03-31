class Solution
{
    public:
         vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
           vector<int> ans = a ; 
           
           for(int i=0 ; i< n-1 ; i++){
             
               if((ans[i] + ans[i+1])%2 == 0 ){
                   
                   int j = i ; 
                   while(j >=0  && ans[j] < ans[j+1] && (ans[j] + ans[j+1])%2 == 0 ){
                      int temp = ans[j]; 
                       ans[j] = ans[j+1]; 
                       ans[j+1] = temp ; 
                       
                       j--; 
                       
                   }
                   
                      
               }
           }
           
           return ans ; 
        }
};
