class Solution {
public:
    string interpret(string command) {
        string s = "";
        int start = 0;
        while(start < command.size())
        {
            char ch = command[start];
            if(ch == 'G')
            {
                s += "G";
                start++;
            }    
            else if(ch == '(')
            {
                char ch2 = command[start + 1];
                if(ch2 == ')')
                {
                    s += "o";
                    start += 2;
                }
                else if (ch2 == 'a')
                {
                    s += "al";
                    start += 4;
                }
            }
        }
        return s;
    }
};

//https://leetcode.com/problems/goal-parser-interpretation/
