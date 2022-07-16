// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        std::vector<int> result(boxes.size());
        for(int i = 0, count = 0, ops = 0; i < boxes.size(); i++)
        {
            result[i] += ops;
            if(boxes[i] == '1') count++;
            ops += count;
        }
        for(int i = boxes.size()-1, ops = 0, count = 0; i >= 0; i--)
        {
            result[i] += ops;
            if(boxes[i] == '1') count++;
            ops += count;
        }
        return result;
    }
};