// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1, water = 0;
        
        while(left < right)
        {
            int h = std::min(height[left], height[right]);
            water = std::max(water, h*(right-left));
            
            while(height[left] <= h && left < right) left++;
            while(height[right] <= h && left < right) right--;
        }
        return water;
    }
};