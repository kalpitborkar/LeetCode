// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int left = 0, right = height.size() - 1;
        
        while(left < right)
        {
            int h = std::min(height[left], height[right]);
            res = std::max(res, h* (right - left));
            
            if(height[left] < height[right]) left++;
            else right--;
        }
        
        return res;
    }
};