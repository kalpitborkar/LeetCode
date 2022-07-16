// https://leetcode.com/problems/arithmetic-subarrays

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        std::vector<bool> res;
        
        int m = l.size();
        
        for(int i = 0; i < m; i++)
        {
            std::vector<int> subArr = std::vector<int>(nums.begin()+l[i], nums.begin()+r[i]+1);
            res.push_back(isArithmetic(subArr));
        }
        return res;
    }
    
    bool isArithmetic(std::vector<int> arr)
    {
        std::sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        int size = arr.size();
        for(int i = 2; i < size; i++)
        {
            if(arr[i] - arr[i-1] != diff) return false;
        }
        return true;
    }
};