#https://leetcode.com/problems/top-k-frequent-elements/

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqDict = {}
        for num in nums:
            if num not in freqDict.keys():
                freqDict[num] = 0
            freqDict[num] += 1
        topK = []
        for i in range(k):
            topK.append(max(freqDict, key=freqDict.get))
            freqDict[topK[i]] = 0
        return topK