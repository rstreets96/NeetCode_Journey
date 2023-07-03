//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bot = matrix.size() - 1;
        int center = 0;
        while(top <= bot)
        {
            center = bot + (top - bot) / 2;
            if(target < matrix[center][0])
            {
                bot = center - 1;
            }
            else if(target > matrix[center][matrix[0].size() - 1])
            {
                top = center + 1;
            }
            else
            {
                top = 0;
                bot = matrix[0].size() - 1;
                int newCenter;
                while(top <= bot)
                {
                    newCenter = top + (bot - top) / 2;
                    if(target < matrix[center][newCenter])
                    {
                        bot = newCenter - 1;
                    }
                    else if(target > matrix[center][newCenter])
                    {
                        top = newCenter + 1;
                    }
                    else
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};