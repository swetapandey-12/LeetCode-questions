/***You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.***/


class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=m-1, j=n-1, k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(num1[i]>num2[j])
            {
                num1[k]=num1[i];
                i--;
                k--;
            }
            else
            {
                num1[k]=num2[j];
                j--;
                k--;
            }
            
        }
        while(i>=0)
            num1[k--]=num1[i--];
        while(j>=0)
            num1[k--]=num2[j--];
    }
};
