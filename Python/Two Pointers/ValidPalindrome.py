#https://leetcode.com/problems/valid-palindrome/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        fromStart = 0
        fromEnd = len(s) - 1
        while 1:
            while(fromStart < fromEnd and not s[fromStart].isalnum()):
                fromStart += 1
            while(fromStart < fromEnd and not s[fromEnd].isalnum()):
                fromEnd -= 1
            if fromStart >= fromEnd:
                return True
            if s[fromStart].lower() != s[fromEnd].lower():
                return False
            fromStart += 1
            fromEnd -= 1