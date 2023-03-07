class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=0, hi=100000000000000, ans =hi;
        while(l<hi){
            long long mid =(l+hi)/2;
            long long cnt =0;
            for(int i=0;i<time.size();i++){
                cnt +=(mid/time[i]);
            }
            if(cnt>=totalTrips){
                ans =min(ans,mid), hi =mid;
            }
            else{
                l =mid+1;
            }
       }
        return ans;
    }
};
