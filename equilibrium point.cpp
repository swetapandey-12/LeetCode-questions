/{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
          int sum=0,k=0;


       for(int i=0; i<n; i++){
           sum+=a[i];
       }
       for(int i=0; i<n; i++){
           sum-=a[i];
           if(k==sum) return i+1;
           k+=a[i];
       }
       return -1;
   }

};
