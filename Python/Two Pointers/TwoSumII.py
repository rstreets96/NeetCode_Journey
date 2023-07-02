#https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        index1 = 0
        index2 = len(numbers) - 1
        while index1 < index2:
            numSum = numbers[index1] + numbers[index2]
            if numSum > target:
                index2 -= 1
            elif numSum < target:
                index1 += 1
            elif numSum == target:
                return [index1 + 1, index2 + 1]