//Link : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
class Solution {
public:
    string freqAlphabets(string s) {
        map<string,char> m;
        m["1"] = 'a';
        m["2"] = 'b';
        m["3"] = 'c';
        m["4"] = 'd';
        m["5"] = 'e';
        m["6"] = 'f';
        m["7"] = 'g';
        m["8"] = 'h';
        m["9"] = 'i';
        m["10#"] = 'j';
        m["11#"] = 'k';
        m["12#"] = 'l';
        m["13#"] = 'm';
        m["14#"] = 'n';
        m["15#"] = 'o';
        m["16#"] = 'p';
        m["17#"] = 'q';
        m["18#"] = 'r';
        m["19#"] = 's';
        m["20#"] = 't';
        m["21#"] = 'u';
        m["22#"] = 'v';
        m["23#"] = 'w';
        m["24#"] = 'x';
        m["25#"] = 'y';
        m["26#"] = 'z';
        
        string str = "";
        int i = 0;
        while(i < s.size())
        {
            if(i+2 < s.size() && s[i+2] == '#')
            {
                str += m[s.substr(i,3)];
                i += 3;
            }
            else
            {
                string a = "";
                a += s[i];
                str += m[a];
                i++;
            }
        }
        return str;
    }
};
