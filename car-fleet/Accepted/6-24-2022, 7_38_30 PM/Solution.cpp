// https://leetcode.com/problems/car-fleet

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.empty()) return 0;
        
        std::vector<std::pair<int, double>> intervals;
        
        for(int i = 0; i < position.size(); i++)
        {
            intervals.push_back(make_pair(position[i], (double)(target - position[i])/ (double)(speed[i])));
        }
        
        std::sort(intervals.begin(), intervals.end());
        
        int fleetCount = 0;
        std::pair<int, double> p = intervals.back();
        
        for(int i = intervals.size() - 2; i >= 0; i--)
        {
            if(intervals[i].second > p.second)
            {
                fleetCount++;
                p = intervals[i];
            }
        }
        
        return fleetCount + 1;
    }
};