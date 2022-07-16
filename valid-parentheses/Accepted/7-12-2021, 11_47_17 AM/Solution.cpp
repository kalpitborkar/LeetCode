// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for(const auto&c:s){
            switch(c){
                case '(': paren.push(c); break;
                case '{': paren.push(c); break;
                case '[': paren.push(c); break;
                case ')': if(paren.empty()||paren.top()!='(') return false; else paren.pop();break;
                case '}': if(paren.empty()||paren.top()!='{')return false; else paren.pop();break;
                case ']': if(paren.empty()||paren.top()!='[')return false; else paren.pop();break;
            }
        }
        return paren.empty();
    }
};