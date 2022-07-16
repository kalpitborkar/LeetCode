// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses

class Solution {
public:
    string reverseParentheses(string s) {
        std::vector<int> opened;
        std::string res;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                opened.push_back(res.size());
            
            else if(s[i] == ')')
            {
                int j = opened.back();
                opened.pop_back();
                std::reverse(res.begin() + j, res.end());
            }
            
            else
                res += s[i];
        }
        
        return res;
    }
};