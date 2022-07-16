// https://leetcode.com/problems/partition-labels

class Solution {
public:
    vector<int> partitionLabels(string s) {
        std::vector<int> result, position(26,0);
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            position[s[i] - 'a'] = i;
        }
        
        int index = INT_MIN, last_i = 0;
        for(int i = 0 ; i < s.size(); i++)
        {
            index = std::max(index, position[s[i] - 'a']);
            if(index == i)
            {
                result.push_back(i - last_i + 1);
                last_i = i+1;
            }
        }
        return result;
    }
};