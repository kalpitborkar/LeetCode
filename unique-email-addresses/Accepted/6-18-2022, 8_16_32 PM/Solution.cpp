// https://leetcode.com/problems/unique-email-addresses

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        std::unordered_set<std::string> set;
        
        for(std::string &email: emails)
        {
            std::string cleanEmail;
            
            for(char c: email)
            {
                if(c == '+' || c == '@') break;
                if(c == '.') continue;
                cleanEmail += c;
            }
            
            cleanEmail += email.substr(email.find('@'));
            set.insert(cleanEmail);
        }
        
        return set.size();
    }
};