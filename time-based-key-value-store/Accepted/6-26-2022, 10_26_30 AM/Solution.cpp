// https://leetcode.com/problems/time-based-key-value-store

class TimeMap {
public:
    std::unordered_map<std::string, std::vector<std::pair<int, std::string>>> map;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back(make_pair(timestamp, value));
    }
    
    string get(string key, int timestamp) {
        if(!map.count(key)) return "";
        int left = 0, right = map[key].size();
        
        while(left < right)
        {
            int mid = left + (right - left)/2;
            if(map[key][mid].first > timestamp) right = mid;
            else left = mid + 1;
        }
        
        if(left > 0 && left <= map[key].size()) return map[key][left-1].second;
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */