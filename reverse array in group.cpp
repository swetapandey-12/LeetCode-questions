class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int start=0, end=k;
        if(end-start>n)
        reverse(arr.begin(),arr.end());
        while(end-start<n)
        {
            if(end>n)
            {
                reverse(arr.begin()+start,arr.end());
                break;
            }
            else
            {
                reverse(arr.begin()+start,arr.begin()+end);
                start=end;
                end=end+k;
            }
        }
        
    }
};
