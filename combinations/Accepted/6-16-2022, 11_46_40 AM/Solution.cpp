// https://leetcode.com/problems/combinations

class Solution {
public:
    std::vector<std::vector<int>> res;
    
    void helper(int index, std::vector<int> &current, int k, int n)
    {
        if(current.size() == k)
        {
            res.push_back(current);
            return;
        }
        
        for(int i = index; i <= n; i++)
        {
            current.push_back(i);
            helper(i + 1, current, k, n);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        std::vector<int> current;
        helper(1, current, k, n);
        return res;
    }
};