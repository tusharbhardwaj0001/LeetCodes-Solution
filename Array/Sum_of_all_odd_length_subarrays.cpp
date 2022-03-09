//link : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
class Solution {
public:
    int sumSlidingWindow(vector<int>& arr,int k)
    {
        int sum = 0,finalSum = 0;
        for(int i = 0;i<k;i++)
        {
            sum += arr[i];
        }
        finalSum += sum;
        for(int i = 1;i+k <= arr.size();i++)
        {
            sum -= arr[i-1];
            sum += arr[i+k -1];
            finalSum += sum;
        }
        return finalSum;
    }
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,k =1;
        while(k <= arr.size())
        { 
            sum += sumSlidingWindow(arr,k);
            k += 2;
        }
        return sum;    
    }
};

