class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0,end = 0;
        if(nums.size() == 1)
        {
            return ;
        }
        while(end < nums.size())
        {
            if(nums[end] != 0)
            {
                int temp = nums[start];
                nums[start] =  nums[end];
                nums[end] = temp;
                start++;
            }
            end++;
        }
    }
};
