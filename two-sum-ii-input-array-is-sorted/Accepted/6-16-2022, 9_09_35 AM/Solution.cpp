// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        
        while(left < right)
        {
            if(numbers[left] + numbers[right] == target)
            {
                std::vector<int> res{left+1, right+1};
                return res;
            }
            if(numbers[left] + numbers[right] > target)
                right--;
            else left++;
        }
        return {};
    }
};