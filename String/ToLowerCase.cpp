//Link: https://leetcode.com/problems/to-lower-case/
class Solution {
public:
    string toLowerCase(string s) {
       for(int i = 0;i<s.size();i++) 
       {
           if(isupper(s[i]))
           {
               char ch = s[i];
               s[i] = tolower(ch);
           }
       }
       return s;
    }
};
