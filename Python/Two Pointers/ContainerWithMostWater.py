#https://leetcode.com/problems/container-with-most-water/

class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        maxVal = 0
        while l < r:
            area = (r - l) * min(height[l], height[r])
            if area > maxVal:
                maxVal = area
            if height[r] < height[l]:
                r -= 1
            elif height[l] < height[r]:
                l += 1
            else:
                r -= 1
                l += 1
        return maxVal