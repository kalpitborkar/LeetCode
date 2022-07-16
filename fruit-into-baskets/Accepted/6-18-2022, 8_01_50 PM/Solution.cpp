// https://leetcode.com/problems/fruit-into-baskets

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        std::unordered_map<int, int> map;
        int left = 0, ans = 0;
        
        for(int right = 0; right < fruits.size(); right++)
        {
            map[fruits[right]]++;
            
            if(map.size() > 2)
            {
                if(map[fruits[left]] == 1)
                    map.erase(fruits[left]);
                else
                    map[fruits[left]]--;
                left++;
            }
            
            ans = std::max(right - left + 1, ans);
        }
        
        return ans;
    }
};