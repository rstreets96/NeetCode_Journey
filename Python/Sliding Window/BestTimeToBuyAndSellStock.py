#https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ret = 0
        lowest = prices[0]
        for price in prices:
            lowest = min(lowest, price)
            ret = max(ret, price - lowest)
        return ret  