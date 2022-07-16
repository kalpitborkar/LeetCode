// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result;
        std::unordered_map<int,int> hashmap;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int to_find = target - nums[i];
            if(hashmap.find(to_find) != hashmap.end())
            {
                result.push_back(i);
                result.push_back(hashmap[to_find]);
                return result;
            }
            else
            {
                hashmap[nums[i]] = i;
            }
        }
        return result;
    }
};