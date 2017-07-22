class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        a = [
            ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"],
            ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"],
            ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"],
            ["", "M", "MM", "MMM"]
        ]
        
        b = ""
        
        b += a[3][num / 1000 % 10]
        b += a[2][num / 100 % 10]
        b += a[1][num / 10 % 10]
        b += a[0][num % 10]
        
        return b
