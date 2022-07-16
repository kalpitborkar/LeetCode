// https://leetcode.com/problems/validate-stack-sequences

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        std::stack<int> stk;
        int popIndex = 0;
        
        for(int i: pushed)
        {
            stk.push(i);
            while(stk.size() && stk.top() == popped[popIndex])
            {
                popIndex++;
                stk.pop();
            }
        }
        
        return stk.empty();
    }
};