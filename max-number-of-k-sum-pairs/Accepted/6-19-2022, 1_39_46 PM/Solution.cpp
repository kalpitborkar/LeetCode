// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        std::unordered_map<int, int> map;
        
        for(int i: nums)
            map[i]++;
        
        for(int i: nums)
        {
            if(map[i] <= 0) continue;
            map[i]--;
            int target = k - i;
            
            if(map[target] > 0)
            {
                res++;
                map[target]--;
            }
        }
        
        return res;
    }
};