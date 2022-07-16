// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stk;
        
        for(auto& t: tokens)
        {
            if(t == "+" || t == "-" || t == "*" || t == "/")
            {
                int op1 = stk.top(); stk.pop();
                int op2 = stk.top(); stk.pop();
                if(t == "+") op1 = op2 + op1;
                if(t == "-") op1 = op2 - op1;
                if(t == "/") op1 = op2 / op1;
                if(t == "*") op1 = op2 * op1;   
                stk.push(op1);
            }
            else stk.push(stoi(t));
        }
        return stk.top();
    }
};