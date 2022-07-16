// https://leetcode.com/problems/design-underground-system

class UndergroundSystem {
public:
    std::unordered_map<int, std::pair<std::string, int>> checkInMap;
    std::unordered_map<std::string, std::pair<double, int>> routeMap;
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checkInMap[id];
        checkInMap.erase(id);
        
        std::string route = checkIn.first + "_" + stationName;
        routeMap[route].first += t - checkIn.second;
        routeMap[route].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        std::string routeName = startStation + "_" + endStation;
        auto route = routeMap[routeName];
        return (route.first/route.second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */