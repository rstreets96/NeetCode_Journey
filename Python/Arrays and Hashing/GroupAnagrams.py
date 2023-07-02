#https://leetcode.com/problems/group-anagrams/

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groupsDict = collections.defaultdict(list)

        for string in strs:
            lettersKey = [0] * 26
            for letter in string:
                lettersKey[ord(letter) - ord('a')] += 1
            groupsDict[tuple(lettersKey)].append(string)
        return groupsDict.values()