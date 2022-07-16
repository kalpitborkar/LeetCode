// https://leetcode.com/problems/queue-reconstruction-by-height

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        std::sort(people.begin(), people.end(), cmp);
        std::vector<std::vector<int>> res;
        
        for(int i = 0; i < people.size(); i++){
            res.insert(res.begin()+people[i][1], people[i]);
        }
        return res;
    }
    
    
    static bool cmp(std::vector<int> &p1, std::vector<int> &p2)
    {
        if(p1[0] != p2[0]) return p1[0] > p2[0];
        else return p1[1] < p2[1];
    }
};