// https://leetcode.com/problems/longest-repeating-character-replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        std::vector<int> count(26);
        int left = 0;
        int res = 0;
        int maxCount = 0;
        int len = s.size();
        
        for(int right = 0; right < len; right++)
        {
            maxCount = std::max(maxCount, ++count[s[right] - 'A']);
            
            while(right - left - maxCount >= k)
            {
                count[s[left++] - 'A']--;
            }
            
            res = std::max(res, right - left + 1);
        }
        
        return res;
    }
};