class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       unordered_map<int, int> m;
        for(auto c : nums) m[c]++;                
        for(auto [c, freq] : m)
            if(freq == 1) return c;                 
        return -1;                                 
    }
};
