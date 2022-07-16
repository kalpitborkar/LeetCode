// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int bucket[101] = {0};
        for(int i: nums) bucket[i] += 1;
        std::vector<int> result;
        for(int i = 1; i < 101; i++)
        {
            bucket[i] += bucket[i-1];
        }
        for(int i: nums)
        {
            if(i == 0) result.push_back(0);
            else result.push_back(bucket[i-1]);
        }
        return result;
    }
};