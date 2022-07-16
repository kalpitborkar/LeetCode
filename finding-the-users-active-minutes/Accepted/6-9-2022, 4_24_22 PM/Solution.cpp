// https://leetcode.com/problems/finding-the-users-active-minutes

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        std::vector<int> ans(k);
        std::unordered_map<int, std::set<int>> map; // ID --> UAM
        
        for(std::vector<int> log: logs)
        {
            map[log[0]].insert(log[1]);
        }
        
        for(auto m: map)
        {
            ans[m.second.size()-1]++;
        }
        return ans;
    }
};