    // Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            sum += nums[i];
        }
        int grand = (n*(n+1))/2;
        return grand - sum;
    }
};
