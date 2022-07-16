// https://leetcode.com/problems/roman-to-integer

#include <string>
#include <cstring>
#include <unordered_map>

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> map{{'I',1}, 
                                    {'V',5},
                                    {'X',10},
                                    {'L',50},
                                    {'C',100},
                                    {'D',500},
                                    {'M',1000}           
                                   };
        
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(map[s[i]]<map[s[i+1]]) ans-=map[s[i]];
            else ans+=map[s[i]];
        }
        ans+=map[s[s.length()-1]];
        return ans;
       
        
        
    }
};