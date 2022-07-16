// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack<int> stk;
        std::vector<int> res(temperatures.size());
        
        for(int i = 0; i < temperatures.size(); i++)
        {
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()])
            {
                int index = stk.top();
                stk.pop();
                res[index] = i - index;
            }
            
                stk.push(i);
        }
        
        return res;
    }
};