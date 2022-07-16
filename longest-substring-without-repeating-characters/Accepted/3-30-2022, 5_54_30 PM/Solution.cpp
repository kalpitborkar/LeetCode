// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, stringLength = s.size(), result = 0;
        std::unordered_set<char> charSet;
        while(left < stringLength && right < stringLength)
        {
            if(charSet.find(s[right]) == charSet.end())
            {
                charSet.insert(s[right++]);
                result = std::max(result, right - left);
            }
            else
            {
                charSet.erase(s[left++]);
            }
        }
        return result;
    }
};