// https://leetcode.com/problems/counting-bits/


vector<int> V;
class Solution {
public:
    int fun(int m)
    {
        if(m == 0 )
        {
            return 0;
        }
        if(m%2 == 1)
        {
            return 1 + fun(m/2);
        }
        return fun(m/2);
    }
    vector<int> countBits(int n) {
        vector<int> bit;
        for(int i = 0;i <= n ;i++)
        {
            bit.push_back(fun(i));
        }
        
        return bit;
    }
};
