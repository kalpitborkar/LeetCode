// https://leetcode.com/problems/integer-to-roman

class Solution {
public:
    string intToRoman(int num) {
        string M[] = {"", "M", "MM", "MMM"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string V[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
        return(M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + V[(num%10)]);
        
        
        
    }
};