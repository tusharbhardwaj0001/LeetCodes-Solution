class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int first = 0,second = 0;
        while(first < word1.size() && second < word2.size())
        {
            s += word1[first];
            s += word2[second];
            first++;
            second++;
        }
        s += word1.substr(first);
        s += word2.substr(second);
        return s;
    }
};
