// https://leetcode.com/problems/generate-parentheses

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<std::string> res;
        helper(res, "", n, n);
        return res;
    }
    
    void helper(std::vector<std::string> &res, std::string curr, int left, int right)
    {
        if(left == 0 && right == 0)
        {
            res.push_back(curr);
            return;
        }
        
        if(left > 0) helper(res, curr + "(", left - 1, right);
        if(right > left) helper(res, curr + ")", left, right - 1);
    }
};