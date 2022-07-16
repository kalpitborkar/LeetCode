// https://leetcode.com/problems/partition-labels

class Solution {
public:
    vector<int> partitionLabels(string s) {
        /*
        1. Store the rightmost occurance of each character (first iteration)
        2. Iterate through the string again:
            3. current pointer
            4. right pointer = max(rightmost occurance of all characters encountered so far)
            5. When current pointer and right pointer collide - partition
            6. Continue 
        */
        
        std::vector<int> last_occurance(27);
        std::vector<int> res;

        for(int i = 0; i < s.size(); i++)
        {
            last_occurance[s[i]-'a'] = std::max(i, last_occurance[s[i]-'a']);
        }
        
        int right_index = 0;
        int left_index = 0;
        for(int current_index = 0; current_index < s.size(); current_index++)
        {
            right_index = std::max(last_occurance[s[current_index]-'a'], right_index);
            if(current_index == right_index)
            {
                res.push_back(current_index - left_index + 1);
                left_index = right_index + 1;
            }
        }
        return res;
    }
};