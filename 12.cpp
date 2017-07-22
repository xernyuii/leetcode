class Solution {
public:
    string intToRoman(int num) {
        
        string a[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM"}
        };
        
        string b;
        b += a[3][num / 1000 % 10];
        b += a[2][num / 100 % 10];
        b += a[1][num / 10 % 10];
        b += a[0][num % 10];
        
        return b;
    }
};
