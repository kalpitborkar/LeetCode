// https://leetcode.com/problems/reverse-only-letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.size()-1;
        while(i < j)
        {
            while(i < j && !std::isalpha(s[i])) i++;
            while(i < j && !std::isalpha(s[j])) j--;
            std::swap(s[i++], s[j--]);
        }
        return s;
    }
};