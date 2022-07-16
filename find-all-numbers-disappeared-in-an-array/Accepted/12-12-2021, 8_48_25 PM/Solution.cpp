// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i : nums)
        {
            int m = std::abs(i) - 1;
            if(nums[m] > 0)
            {
                nums[m] = -nums[m];
            }
        }
        
        std::vector<int> answer;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            {
                answer.push_back(i+1);
            }
        }
        
        return answer;
        
    }
};