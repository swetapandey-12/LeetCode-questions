class Solution {
  public:
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        set<int> s {P.begin(), P.end()};
        vector<int> leafNodes;
        for(int i = 1; i <= N; i++) {
            if(!s.count(i))
                leafNodes.push_back(i);
        }
        
        long long ans = INT_MIN;
        for(auto node: leafNodes) {
            long long fb = 0;
            while(node != -1) {
                fb *= -1;
                fb += A[node - 1];
                node = P[node - 1];
                ans = max(ans, fb);
            }
        }
        
        return ans;
    }
};
