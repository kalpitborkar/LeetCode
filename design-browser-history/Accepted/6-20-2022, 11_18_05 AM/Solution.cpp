// https://leetcode.com/problems/design-browser-history

class BrowserHistory {
public:
    std::stack<std::string> backHistory, forwardHistory;
    
    BrowserHistory(string homepage) {
        backHistory.push(homepage);
        forwardHistory = std::stack<std::string>();
    }
    
    void visit(string url) {
        backHistory.push(url);
        forwardHistory = std::stack<std::string>();
    }
    
    string back(int steps) {
        while(steps > 0 && backHistory.size() > 1)
        {
            forwardHistory.push(backHistory.top());
            backHistory.pop();
            steps--;
        }
        return backHistory.top();
    }
    
    string forward(int steps) {
        while(steps > 0 && forwardHistory.size() > 0)
        {
            backHistory.push(forwardHistory.top());
            forwardHistory.pop();
            steps--;
        }
        return backHistory.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */