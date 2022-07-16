// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0, j = s.length();
        std::vector<int> ans;
        int k;
        
        for(k = 0; k < s.length(); k++)
        {
            if(s[k] == 'I')
            {
                ans.push_back(i);
                i++;
            }
            else
            {
                ans.push_back(j);
                j--;
            }
        }
        if(s[k-1] == 'I')
        {
            ans.push_back(i);
        }
        else
        {
            ans.push_back(j);
        }
        
        return ans;
    }
};