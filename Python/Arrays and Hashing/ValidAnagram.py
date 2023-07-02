#https://leetcode.com/problems/valid-anagram/

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        letterDictS = {}
        letterDictT = {}
        for letter in s:
            if letter not in letterDictS.keys():
                letterDictS[letter] = 0
            letterDictS[letter] += 1
        for letter in t:
            if letter not in letterDictT.keys():
                letterDictT[letter] = 0
            letterDictT[letter] += 1
        if letterDictS == letterDictT:
            return True
        else:
            return False