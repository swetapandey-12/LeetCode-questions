/***Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.***/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")  //if  substring needle is empty then return 0
            return 0;
        int found = haystack.find(needle);  /***we use find func which is present in string stl lib to find first occurance of substring in string , found stores the return
        if(found != string::npos)              value of the func, in the next line npos-substring is not found in the string ***/
            return found;
        return -1;
        
    }
};
