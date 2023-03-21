int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
      int mini=INT_MAX;
     for(int i=0;i<pos.size();i++)
     {    pos[i]=abs(pos[i]-cur);
          pos[i]*=time[i];
          mini=min(mini,pos[i]);
     }
     
     
     return mini;
    }
