class Solution {
public:
    string vowel={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool halvesAreAlike(string s) {
        int a=0,b=0;
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(vowel.find(s[i])!=string::npos) a++;
            if(vowel.find(s[j])!=string::npos)b++;
            i++;
            j--;
        }
        return a==b;

    }
};
