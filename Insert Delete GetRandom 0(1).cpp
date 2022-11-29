class Randomset{
  public:
       unorderd_map<int,int>mp;
       vector<int>arr;
       Randomset(){
         bool insert(int val){
           if(mp.count(val))
             return false;
           arr.push_back(val);
           mp[val] = arr.size() - 1;
           return true;
         }
       }
      bool remove(int val) {
        
        // if val is present in map
        
        if(mp.count(val))
        {
            // find the index of val from array
            
            int idx = mp[val];
            
            // find the last value from array
            
            int last_val = arr.back();
            
            // put the last_val at idx
            
            arr[idx] = last_val;
            
            // remove the last element from array
            
            arr.pop_back();
            
            // update the value of last_val in map
           
            mp[last_val] = idx;
            
            // remove the val from map
            
            mp.erase(val);
            
            return true;
        }
        
        return false;
    }
    int getRandom() {
        
        // generate the random number from (0 to arr.size() - 1)
        
        int rand_idx = rand() % arr.size();
        
        return arr[rand_idx];
    }
};
