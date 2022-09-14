class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
      int a = 0, b = 0, flag = 0;
        while(k && a < n && b < m)
        {
            if(arr1[a] > arr2[b]) 
            {
                b++;
                flag = 0;
            }
            else 
            {
                a++;
                flag = 1;
            }
            k--;
        }
        
        while(k && a < n)
        {
            a++;
            k--;
            flag = 1;
        }
        
        while(k && b < m)
        {
            b++;
            k--;
            flag = 0;
        }
        
        if(flag) return arr1[a - 1];
        return arr2[b - 1];
    } 
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends
