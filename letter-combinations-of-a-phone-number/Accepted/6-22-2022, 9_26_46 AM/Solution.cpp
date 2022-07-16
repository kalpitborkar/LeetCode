// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:
    const std::vector<std::string> pad = {"" , "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        std::vector<std::string> res;
        res.push_back("");
        
        for(char digit: digits)
        {
            std::vector<std::string> temp;
            
            for(char c: pad[digit - '0'])
            {
                for(std::string s: res)
                {
                    temp.push_back(s + c);
                }
            }
            
            res.swap(temp);
        }
        
        return res;
    }
};