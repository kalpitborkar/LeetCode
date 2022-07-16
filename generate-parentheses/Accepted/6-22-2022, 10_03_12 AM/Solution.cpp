// https://leetcode.com/problems/generate-parentheses

class Solution {
public:
    std::vector<std::string> res;
    std::vector<char> stk;
    
    vector<string> generateParenthesis(int n) {
        backtrack(0, 0, n);
        return res;
    }
    
    void backtrack(int openN, int closeN, int n)
    {
        if(openN == n && closeN == n)
        {
            std::cout<<"asdgh";
            std::string ret;
            for(char c: stk) ret += c;
            res.push_back(ret);
            return;
        }
        
        if(openN < n)
        {
            stk.push_back('(');
            backtrack(openN + 1, closeN, n);
            stk.pop_back();
        }
        
        if(openN > closeN)
        {
            stk.push_back(')');
            backtrack(openN, closeN + 1, n);
            stk.pop_back();
        }
    }
};