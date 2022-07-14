// Leetcode - easy - 27 
?
  /***Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.***/
  
  
  class Solution {
public:
    int removeElement(vector<int>& num, int val) {
        
        int i;
        int start = 0;
        int n=num.size();
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(num[i]!=val)
            {
              num[start++]=num[i];
            }
        }
      return start;        
    }
};
