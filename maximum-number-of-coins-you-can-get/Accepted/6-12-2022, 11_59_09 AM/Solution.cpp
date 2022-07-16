// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size()/3, res = 0;
        std::sort(piles.begin(), piles.end());
        
        for(int i = 0; i < n; i++)
        {
            res += piles[3*n - 2 - 2*i];
        }
        
        return res;
    }
};