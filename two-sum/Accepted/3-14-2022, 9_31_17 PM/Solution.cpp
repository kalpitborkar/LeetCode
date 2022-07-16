// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> hash;
        std::vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int numToFind = target - nums[i];
            
            if(hash.find(numToFind) != hash.end())
            {
                result.push_back(hash[numToFind]);
                result.push_back(i);
                return result;
            }
                hash[nums[i]] = i;
        }
        return result;
    }
};