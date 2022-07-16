// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::vector<int> curr(26), goal(26);
        
        for(char c: s1)
            goal[c - 'a']++;
        
        for(int i = 0; i < s2.size(); i++)
        {
            curr[s2[i] - 'a']++;
            
            if(i >= s1.size()) curr[s2[i - s1.size()] - 'a']--;
            if(curr == goal) return true;
        }
        
        return false;
    }
};