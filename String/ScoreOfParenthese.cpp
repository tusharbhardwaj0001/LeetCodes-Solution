//link : https://leetcode.com/problems/score-of-parentheses/
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(0);
            }
            else if(s[i] == ')')
            {
                if(st.top() == 0)
                {
                    st.pop();
                    st.push(1);
                }
                else
                {
                    int score = 0;
                    while(st.top() != 0)
                    {
                        score += 2*st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(score);
                }
            }
        }
        int finalScore = 0;
        while(!st.empty())
        {
            finalScore += st.top();
            st.pop();
        }
        return finalScore;
    }
};
