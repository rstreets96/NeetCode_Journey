//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int center = 0;
        while(l <= r)
        {
            center = l + (r - l) / 2;
            if(target < nums[center])
            {
                r = center - 1;
            }
            else if( target > nums[center])
            {
                l = center + 1;
            }
            else
            {
                return center;
            }
        }
        return -1;
    }
};