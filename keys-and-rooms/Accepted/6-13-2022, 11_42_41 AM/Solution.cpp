// https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        std::stack<int> stk;
        stk.push(0);
        std::unordered_set<int> seen;
        seen.insert(0);
        
        while(!stk.empty())
        {
            int i = stk.top();
            stk.pop();
            
            for(int j: rooms[i])
            {
                if(seen.count(j) == 0)
                {
                    stk.push(j);
                    seen.insert(j);
                    if(rooms.size() == seen.size()) return true;
                }
            }
        }
        return rooms.size() == seen.size();
    }
};