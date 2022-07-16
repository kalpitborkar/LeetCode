// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        std::vector<int> res(2);
        res[0] = findFirst(nums, target);
        res[1] = findLast(nums, target);
        return res;
    }
    
    int findFirst(std::vector<int> &nums, int target)
    {
        int index = -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] >= target) right = mid - 1;
            else left = mid + 1;
            if(nums[mid] == target) index = mid;
        }
        return index;
    }
    
    int findLast(std::vector<int> &nums, int target)
    {
        int index = -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] <= target) left = mid + 1;
            else right = mid - 1;
            if(nums[mid] == target) index = mid;
        }
        return index;
    }
};