// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(), candies.end());
        std::vector<bool> result;
        for(int i: candies)
        {
            if(i + extraCandies >= max_candies) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};