class Solution {
public:
    string reverseWords(string s){
      int i =0;
      int n= s.size();
      vector<string> v;        
        
        while (i < n){            
            string res = "";
            
            while (i < n && s[i] == ' ') i++; // to avoid white space
            while (i < n && s[i] != ' ') res+=s[i++];
            
            if (res == "" || res == " ") continue; // for safety if the condition result in true value.
            v.push_back (res);
        }
        
        string ans = v[0];
        
        for (int i = 1; i < v.size(); i++){
            ans = v[i] + " " + ans; // used 3rd method frm above
        }
        
        return ans;
    }
};
