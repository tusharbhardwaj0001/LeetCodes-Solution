class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1)
            return s;
        vector<string> v(numRows, ""); 
        bool flag = true;
        int row = 0;
        for(int i = 0;i < s.size();i++)
        {
            v[row] += s[i];
            if(flag == true)
            {
                row++;
                if(row == numRows)
                {
                    flag = false;
                    row = numRows-2;
                }
            }
            else{
                row--;
                if(row == -1)
                {
                    flag = true;
                    row = 1;
                }
            }
        }
        string ans = "";
        for(int i = 0; i< numRows;i++)
        {
            ans += v[i];
        }
        
        return ans;
    }
};
