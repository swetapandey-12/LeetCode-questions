class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum =0;
        for(int i =0;i<N;i++){
            sum+=A[i];
        }
        long long x =INT_MAX;
        for(int i=0;i<N;i++){
            if(sum<=(long long)N*A[i]){
                x =min(x,(long long)A[i]);
            }
        }
        return x;
    }
};
