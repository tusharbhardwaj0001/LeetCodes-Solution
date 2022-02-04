class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        int n = s.size();
        queue<char> Q1;
        for(int i=0;i<n;i++)
        {
            Q1.push(s[i]);
        }
        queue<char> Q2;
        for(int i = 0;i< n;i++)
        {
            Q2.push(goal[i]);
        }
        
        while(n--)
        {
            char ch = Q2.front();
            Q2.pop();
            Q2.push(ch);
            if(Q1 == Q2)
                return true;
        }
        return false;
    }
};
