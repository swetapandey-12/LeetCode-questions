class Solution {
public:
    int maxArea(vector<int>& height) {
        int water =0;
        int l= 0;
        int r= height.size()-1;
        while(l<r)
        {
            int h = min(height[l],height[r]);
            water = max(water, (r-l)*h);
            while (height[l] <= h && l < r) l++;
            while (height[r] <= h && l < r) r--;
    }
        return water;

        
        
        
    }
};
