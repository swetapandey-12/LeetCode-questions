Use a max heap pq to store the Keep popping the heap top (say n), remove n / 2 stones, and push n - n / 2 back to the heap, repeating k times. 
  The answer is the sum of piles minus the sum of all stones removed.
  
  
  class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        priority_queue<int> pq(piles.begin(),piles.end());
        for(int i=0;i<k;i++)
        {
            int t=pq.top();
            pq.pop();
            t=t-(t/2);
            pq.push(t);
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
