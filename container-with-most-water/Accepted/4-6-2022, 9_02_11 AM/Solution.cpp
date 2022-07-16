// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxWater = 0;
        while(left < right)
        {
            int currHeight = std::min(height[left], height[right]);
            maxWater = std::max(maxWater, currHeight*(right-left));
            while(left < right && currHeight >= height[left]) left++;
            while(left < right && currHeight >= height[right]) right--;
        }
        return maxWater;
    }
};