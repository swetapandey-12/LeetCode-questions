class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> res ;
        if(inter.size()==0)
            return res;
        
        sort(inter.begin(),inter.end(),[](vector<int> &a, vector <int> &b)
        {
           return a[0]<b[0]; 
        });
        
        vector<int>curr = inter[0];
        for(int i =1;i<inter.size();i++)
        {
            if(curr[1]<inter[i][0])
            {
                res.push_back(curr);
                curr = inter[i];
            }
            else{
                curr[1] =max(curr[1],inter[i][1]);
            }
        }
        res.push_back(curr);
        return res;
            
        
        
