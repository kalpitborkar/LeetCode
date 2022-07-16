// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        std::vector<int> ans;
        
        int low = 0, high = s.length();
                
        for(int i = 0 ; i <= s.length(); i++)
        {
            ans.push_back(i == s.length() || s[i] == 'I' ? low++ : high--);
        }
        return ans;
    }
};