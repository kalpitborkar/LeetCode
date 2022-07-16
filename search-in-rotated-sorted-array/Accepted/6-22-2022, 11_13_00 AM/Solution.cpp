// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while(left < right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] > nums[right])
                left = mid + 1;
            else right = mid;
        }
        
        if(target <= nums.back())
        {
            right = nums.size() - 1;
        }
        else
        {
            right = left - 1;
            left = 0;
        }
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        
        return -1;
    }
};