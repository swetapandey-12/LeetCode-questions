class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string>IP;
        vector<string>temp;
        validIPaddress(temp,IP,s,0);
        return IP;
        
    }
    void validIPaddress(vector<string>&temp,vector<string>&IP,string &s, int index)
    {
        if(index==s.size() && temp.size()==4)
        {
            string validip =temp[0] +"."+temp[1] + "." +temp[2] + "." + temp[3];
            IP.push_back(validip);
            return;
        }
        string tempstr="";
        for(int i=index; i< s.length()&& temp.size() < 4; i++)
        {
            if(s[i]-'0'>9) continue;
            tempstr+=s[i];
            int tempint=stoi(tempstr);
            if(0<=tempint && tempint<=255)
            {
                temp.push_back(tempstr);
                validIPaddress(temp,IP,s,i+1);
                temp.pop_back();
            }
            if(tempint <=0 || tempint>255)
            break;
        }
    }
};
