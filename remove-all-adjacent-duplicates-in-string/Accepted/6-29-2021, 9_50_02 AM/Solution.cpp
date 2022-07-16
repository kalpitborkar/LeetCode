// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int length = s.length();
//         char char_array[length+1];
//         strcpy(char_array, s.c_str());
        
        
        
        while(true){
        bool duplicate_char_exists = false;
        for(int i =0 ;i < length;i++){
            if(s[i] == s[i+1]){
                s.erase(s.begin() + i+1);
                s.erase(s.begin() + i);
                length -=2;
                duplicate_char_exists = true;
            }
        }
        if(duplicate_char_exists == false) break;
        }
        return s;
    }
};