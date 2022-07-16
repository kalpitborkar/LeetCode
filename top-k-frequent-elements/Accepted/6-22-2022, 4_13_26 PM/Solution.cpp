// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> freq;
        std::vector<std::vector<int>> buckets(n + 1);
        std::vector<int> res;
        
        for(int num: nums) freq[num]++;
        
        for(auto i: freq)
        {
            buckets[i.second].push_back(i.first);
        }
        
        for(int i = n; i >= 0 && res.size() < k; i--)
        {
            if(!buckets[i].empty())
            {
                res.insert(res.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        return res;
    }
};