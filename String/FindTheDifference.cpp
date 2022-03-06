// link : https://leetcode.com/problems/find-the-difference/
//Method 1 : using sorting technique
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i = 0;
        while(i < s.length())
        {
            if(s[i] != t[i])
                return t[i];
            i++;
        }
        
        return t[t.length()-1];
        return t[0];
    }
};

//Method 2: using hashmap
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;

        for(int i = 0;i < t.size(); i++)
        {
            m[t[i]]++;
        }
        for(int i = 0;i<s.size();i++)
        {
            m[s[i]]--;
        }
        for(int i = 0;i<t.size();i++)
        {
            if(m[t[i]] != 0)
                return t[i];
        }
        return t[0];
    }
};
