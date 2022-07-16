// https://leetcode.com/problems/koko-eating-bananas

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            double val = 0;
            
            for(int i = 0; i < piles.size(); i++)
            {
                val += std::ceil((double)(piles[i])/(double)(mid));
            }
            
            if(val <= h) high = mid - 1;
            else low = mid + 1;
        }
        
        return low;
    }
};