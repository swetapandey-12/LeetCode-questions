class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int maxv=arr[0];
        int minv =arr[0];
        int jump=1;
        if(n==1) return 0;
        else if(arr[0]==0) return -1;
        else{
            for(int i=1;i<n;i++)
            {
                if(i==n-1)
                {
                    return jump;
                }
               maxv= max(maxv, i+arr[i]);
               minv--;
               if(minv==0){
                   jump++;
                   if(i>=maxv){
                       return -1;
                   }
                   minv = maxv-i;
               }
                            
            }  
        }
    }
};
