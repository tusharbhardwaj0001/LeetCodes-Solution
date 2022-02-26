// Maximum difference between increasing elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDifference = 0;
        int minimum = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            maxDifference = max(maxDifference, nums[i] - minimum);
            minimum = min(minimum, nums[i]);
        }
        
        if(maxDifference==0)
            return -1;
        else
            return maxDifference;
    }
};
