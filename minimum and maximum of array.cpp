pair<long long, long long> getMinMax(long long a[], int n) {
    long long max =a[0],min =a[0];
    for(long long i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    pair<long long, long long> ans;
    ans.first = min;
    ans.second =max;
    return ans;
    
    
}
