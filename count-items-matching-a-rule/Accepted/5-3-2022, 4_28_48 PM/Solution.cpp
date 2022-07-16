// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0;
        for(std::vector<std::string> item: items)
        {
            if(
            (ruleKey == "type" && ruleValue == item[0]) ||
            (ruleKey == "color" && ruleValue == item[1]) ||
            (ruleKey == "name" && ruleValue == item[2])
            )
            {
                res++;
            }
        }
        return res;
    }
};