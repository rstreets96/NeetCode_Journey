//https://leetcode.com/problems/swim-in-rising-water

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid.size() == 1)
        {
            return 0;
        }
        vector<vector<bool>> visited(n, vector<bool>(m));
        visited[0][0] = true;

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({grid[0][0], 0, 0});

       vector<vector<int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

       while(!pq.empty())
       {
           vector<int> curr = pq.top();
           pq.pop();
           
           for(int i=0; i<dirs.size(); i++)
           {
               int x = curr[1] + dirs[i][0];
               int y = curr[2] + dirs[i][1];
               if(x < n && x >=0 && y < m && y >=0 && !visited[x][y])
               {
                   visited[x][y] = true;
                   int mag = max(curr[0], grid[x][y]);
                   if(x == n - 1 && y == m - 1)
                   {
                       return mag;
                   }
                   pq.push({mag, x, y});
               }
               
           }


       }
       return -1;

    }
};

