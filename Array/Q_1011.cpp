// 1011. Capacity To Ship Packages Within D Days

class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int maxCapacity)
    {
        int sum = weights[0], i = 1;
        for(i = 1;i < weights.size() && days > 0;i++)
        {
            if(sum + weights[i] <= maxCapacity)
            {
                sum += weights[i];
            }
            else
            {
                days--;
                sum = weights[i];
            }
        }
        
        if(days == 0 || i != weights.size())
            return false;
        return true;    
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int high = 0, low = INT_MIN;
        for(int i = 0;i < weights.size();i++)
        {
            high += weights[i];
            low = max(low, weights[i]);
        }
        
        if(days >= weights.size())
            return low;
        
        int ans = 0;
        while(low <= high)
        {
            int mid = (low + high)/2;
            
            if(isPossible(weights, days, mid))
            {
                high = mid-1;
                ans = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};
