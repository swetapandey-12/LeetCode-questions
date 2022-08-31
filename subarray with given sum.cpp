//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long currentsum=0;
        int j =0;
        for(int i =0;i<n;i++)
        {
          if(currentsum<s)
          {
              currentsum+=arr[i];
          }
          while(currentsum>s)
          {
            currentsum-=arr[j++];      
          }
          if(currentsum==s && s!=0)
          {
              return {j+1, i+1};
          }
        
          
        }
        return {-1};
        
    }
};
