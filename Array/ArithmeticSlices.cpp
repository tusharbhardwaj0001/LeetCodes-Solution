//Method 1: 
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0; 
        int count = 0,finalAns = 0;
        for(int i = 2;i<nums.size();i++)
        {
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2])
            {
                count++;
                finalAns += count;   
            }
            else
            {
                count = 0;
            }
        }
        return finalAns;
        
    }
};


//Solution 2:
/*EXPLANATION

The Idea is Simple , the array is called arithmetic if it consists of at least 3 elements.
So, firstly if arr_size is < 3 , we will return false.
The second requirement of the question is, that the difference b/w any two consecutive elements should be same.
so running a loop from i = 0 to nums.size() - 2 as we need at least 2 consecutive elements.
now we will store the difference of first 2 elements in a diff variable.
Again, we will traverse a loop to find how many consecutive pairs are with same diff.
running a inner loop from i + 2 as the outer for loop has calculcated the diff of first 2 elements for us.
now if the difference of arr[j] - arr[j-1] ,current and previous element is same , this means we find a consecutive pair, with same diff, therefore we will increase the count.
If the diff is not same then we will break the loop, as we need consecutive elements diff to be same.
Return the Count.
TIME COMPLEXITY
O(N * N)

SPACE COMPLEXITY
O(1)

CODE WITH EXPLANATION     */

				// 😉😉😉😉Please upvote if it helps 😉😉😉😉
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
		// if nums size is less than 3 return false
        if(nums.size() < 3)
            return 0;
        
        int cnt = 0, diff;
        
        for(int i = 0; i<nums.size()-2; ++i)
        {
			// storing diff of first 2 elements
            diff = nums[i+1] - nums[i];
			
			// checking for consecutive elements with same difference.
            for(int j = i+2; j<nums.size(); ++j)
            {
				// if we find the same diff of next 2 elements
				// this means we  find consecutive elements
				// increase the Count
                if(nums[j] - nums[j-1] == diff)
                    ++cnt;
                else
				// break as we need to cnt for consecutive diff elements
                    break;
            }
        }
		// return cnt
        return cnt;
    }
};




//Solution 3:
/* EXPLANATION

The Idea is Simple , the array is called arithmetic if it consists of at least 3 elements.
So, firstly if arr_size is < 3 , we will return false.
The second requirement of the question is, that the difference b/w any two consecutive elements should be same.
Storing diff of first 2 elements in diff as prev_diff = nums[1] - nums[0].
Now iterating a loop from i = 1 to nums.size()-1 and finding the diff of next consecutive elements.
If the diff is equal to prev_diff, increase the cnt of ind variable;
else set ind to zero and update prev_diff with curr diff.
add ind to cnt.
Return cnt.
TIME COMPLEXITY
O(N)

SPACE COMPLEXITY
O(1)

CODE WITH EXPLANATION    */

					// 😉😉😉😉Please upvote if it helps 😉😉😉😉
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        
        int cnt = 0, diff = 0 , ind = 0;
        int prev_diff = nums[1] - nums[0];
        
        for(int i = 1; i<nums.size()-1 ; ++i)
        {
            // curr difference
            int diff = nums[i+1] - nums[i];
            
            // if we find same diff of consecutive elements
            // increase count
            if(diff ==  prev_diff)
                ++ind;
            
            else
            {
                // update prev diff with curr diff
                // as we don't find consecutive elements with same diff
                prev_diff = diff;
                ind = 0;  // make ind to 0
            }
            
            // add cosecutive arithmetic sequence cnt
                cnt += ind;
        }
        
       
        return cnt;
    }
};
