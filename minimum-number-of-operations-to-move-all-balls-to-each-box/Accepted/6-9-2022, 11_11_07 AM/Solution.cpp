// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int length = boxes.length();
        int balls_so_far = 0, operations_so_far = 0;
        std::vector<int> res(length);
        
        for(int i = 0; i < length; i++)
        {
            res[i] = operations_so_far;
            if(boxes[i] == '1') balls_so_far++;
            operations_so_far += balls_so_far;
        }
        
        balls_so_far = 0;
        operations_so_far = 0;
        for(int i = length-1; i >= 0; i--)
        {
            res[i] += operations_so_far;
            if(boxes[i] == '1') balls_so_far++;
            operations_so_far += balls_so_far;
        }
        return res;
    }
};