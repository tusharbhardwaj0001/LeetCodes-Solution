class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int s;
        
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());

        for(int i = 0;i<nums.size()-2;i++)
        {
            int a = nums[i];
            int b = nums[i+1];
            int c = nums[i+2];
            
            if((a+c > b)&&(a+b > c)&&(b+c > a))
            {
                return a+b+c;
            }
        
        }
        
        return 0;
    }
};
