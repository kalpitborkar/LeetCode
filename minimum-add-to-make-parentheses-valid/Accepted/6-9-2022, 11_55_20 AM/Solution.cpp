// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
public:
    int minAddToMakeValid(string s) {
        std::stack<int> stk;
        for(char c: s)
        {
            if(c == ')' && !stk.empty() && stk.top() == '(') stk.pop();
            else stk.push(c);
        }
        return stk.size();
    }
};