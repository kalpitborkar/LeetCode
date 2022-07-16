// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> charSet;
        int left = 0, right = 0, stringLength = s.size(), result = 0;
        
        while(left < stringLength && right < stringLength)
        {
            if(charSet.find(s[right]) == charSet.end())
            {
                charSet.insert(s[right]);
                right++;
                result = std::max(result, right - left);
            }
            else
            {
                charSet.erase(s[left]);
                left++;
            }
        }
        return result;
    }
};