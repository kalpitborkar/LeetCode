// https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
    bool isPalindrome(std::string s)
    {
        for(int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            if(s[i] != s[j])
            {
                return false;
            }
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for(auto &w : words)
        {
            if(isPalindrome(w))
            {
                return w;
            }
        }
        return "";
    }
};