class Solution {
public:
    int countOdds(int low, int high) {
        int difference = high - low + 1;
        if(difference%2 == 0)
            return difference/2;
        if(low%2 == 0)
            return difference/2;
        return difference/2 + 1;
        
    }
};
