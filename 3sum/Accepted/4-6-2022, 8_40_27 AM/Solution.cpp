// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            int target = -nums[i];
            int front = i+1, back = nums.size()-1;
            while(front < back)
            {
                int sum = nums[front] + nums[back];
                if(sum < target) front++;
                else if(sum > target) back--;
                else
                {
                    std::vector<int> triplet = {nums[i], nums[front], nums[back]};
                    result.push_back(triplet);
                    while(front < back && nums[front] == triplet[1]) front++;
                    while(front < back && nums[front] == triplet[2]) back--;
                }
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        }
        return result;
    }
};