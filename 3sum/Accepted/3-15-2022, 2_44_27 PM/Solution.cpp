// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> answer;
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            int target = -nums[i];
            int front = i+1;
            int back = nums.size()-1;
            while(front < back)
            {
                int sum = nums[front] + nums[back];
                if(sum < target)
                {
                    front++;
                }
                else if(sum > target)
                {
                    back--;
                }
                else
                {
                    std::vector<int> ans = {nums[i],nums[front], nums[back]};
                    answer.push_back(ans);
                    
                    while(front < back && nums[front]==ans[1])
                    {
                        front++;
                    }
                    
                    while(front < back && nums[back] == ans[2])
                    {
                        back--;
                    }
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i])
            {
                i++;
            }
        }
        return answer;
    }
};