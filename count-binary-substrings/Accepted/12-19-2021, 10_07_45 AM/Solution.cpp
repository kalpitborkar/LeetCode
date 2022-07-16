// https://leetcode.com/problems/count-binary-substrings

class Solution {
public:
    int countBinarySubstrings(string s) {
        int currConsecutive = 1, prevConsecutive = 0, ans = 0;
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] != s[i-1])
            {
                ans += std::min(prevConsecutive, currConsecutive);
                prevConsecutive = currConsecutive;
                currConsecutive = 1;
            }
            else
            {
                currConsecutive++;
            }
        }
        ans += std::min(prevConsecutive, currConsecutive);
        return ans;
    }
};