//link : https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 == 1)
            return  false;
        
        stack<char> A;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                A.push(s[i]);
            else if(A.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
                return false;
            else if(s[i] == ')')
            {
                if(A.top() == '(')
                    A.pop();
                else
                    return false;
            }
            else if (s[i] == ']')
            {
                if(A.top() == '[')
                    A.pop();
                else
                    return false;
            }
            else if(s[i] == '}')
            {
                if(A.top() == '{')
                    A.pop();
                else
                    return false;
            }
        }
        if(A.empty())
            return true;
        else 
            return false;
    }
};
