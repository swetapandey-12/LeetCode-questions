#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        long long int sum=0;
        for(int i=0,j=n-1; i<n,j>=0; i++, j--){
    
               sum = sum+ a[i]*b[j];
           }
        
        return sum;
          
    }
};
