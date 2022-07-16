// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        
        for(char c: s)
        {
            if(c == '(' || c == '{' || c == '[') stk.push(c);
            else if(c == ')' && !stk.empty() && stk.top() == '(') stk.pop();
            else if(c == '}' && !stk.empty() && stk.top() == '{') stk.pop();
            else if(c == ']' && !stk.empty() && stk.top() == '[') stk.pop();
            else return false;
        }
        
        return stk.empty();
    }
};