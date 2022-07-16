// https://leetcode.com/problems/min-stack

class MinStack {
public:
    std::vector<std::pair<int, int>> stk;
    
    MinStack() {
        
    }
    
    void push(int val) {
        int min;
        if(stk.empty()) min = val;
        else min = std::min(val, stk.back().second);
        stk.push_back({val, min});
    }
    
    void pop() {
        stk.pop_back();
    }
    
    int top() {
        return stk.back().first;
    }
    
    int getMin() {
        return stk.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */