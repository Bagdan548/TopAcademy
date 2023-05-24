class Solution:
    def myAtoi(self, s: str) -> int:
        i = 0
        while i < len(s) and s[i].isspace():
            i += 1
        
        sign = 1
        if i < len(s) and s[i] in ('-', '+'):
            if s[i] == '-':
                sign = -1
            i += 1
        
        num = 0
        while i < len(s) and s[i].isdigit():
            num = num * 10 + int(s[i])
            i += 1
        
        num *= sign
        
        max_int = (1 << 31) - 1
        min_int = -(1 << 31)
        if num > max_int:
            return max_int
        elif num < min_int:
            return min_int
        else:
            return num