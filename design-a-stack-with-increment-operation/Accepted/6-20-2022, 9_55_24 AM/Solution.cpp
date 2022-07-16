// https://leetcode.com/problems/design-a-stack-with-increment-operation

class CustomStack {
public:
    int max;
    std::vector<int> stk;
    
    CustomStack(int maxSize) {
        max = maxSize;
    }
    
    void push(int x) {
        if(stk.size() < max) stk.push_back(x);
    }
    
    int pop() {
        if(stk.size() == 0) return -1;
        int back = stk.back();
        stk.pop_back();
        return back;
    }
    
    void increment(int k, int val) {
        int min = k;
        if(stk.size() < k) min = stk.size();
        
        for(int i = 0; i < min; i++)
        {
            stk[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */