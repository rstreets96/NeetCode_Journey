//https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int sum = 0, maxL = height[l], maxR = height[r];
        int minmax = 0;
        while(l < r)
        {
            
            if(maxL <= maxR)
            {
                l++;
                maxL = max(maxL, height[l]);
                sum += maxL - height[l];
            }
            else
            {
                r --;
                maxR = max(maxR, height[r]);
                sum += maxR - height[r];
            }
        }
        return sum; 
    }
};