// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        std::stack<int> stk;
        
        for(const auto& c : s)
        {
            switch(c)
            {
                case '{' : stk.push('}');
                    break;
                case '[' : stk.push(']');
                    break;    
                case '(' : stk.push(')');
                    break;
                default:
                    if(stk.size() == 0 || stk.top() != c)
                    {
                        return false;
                    }
                    else
                    {
                        stk.pop();
                    }
                    
            }
        }
        return (stk.size() == 0);
    }
};