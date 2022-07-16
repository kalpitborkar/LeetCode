// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0, i =0;
        
        for(int n : nums)
        {
            i++;
            ans ^= n;
            ans ^= i;
            
        }
        return ans;
    }
};