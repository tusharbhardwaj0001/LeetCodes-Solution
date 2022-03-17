// link : https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        int leftMax[n];
        int lMax = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            leftMax[i] = max(lMax , height[i]);
            lMax = max(lMax,height[i]);
        }
        
        int rightMax[n];
        int rMax = INT_MIN;
        for(int i = n-1;i>=0;i--)
        {
            rightMax[i] = max(rMax, height[i]);
            rMax = max(rMax,height[i]);
        }
        
        int s = 0;
        for(int i = 1;i<n-1;i++)
        {
            s += (min(leftMax[i],rightMax[i]) - height[i]);
        }
        
        //for(int i = 0;i<n;i++)
          //  cout << rightMax[i] << " ";
        return s;
    }
};
