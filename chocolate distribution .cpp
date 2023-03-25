 class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
     sort(a.rbegin(),a.rend());
        int i=0; 
        int j=i+m-1;
        long long curr_dif=0;
        long long dif=INT_MAX;
        while(j<n)
        {
            curr_dif=a[i]-a[j];
            i++;
            j++;
            dif=min(dif,curr_dif);
        }
        return dif;
    }   
};
