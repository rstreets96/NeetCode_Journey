//https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> index;
        int n = temperatures.size();
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++)
        {
            if(!index.empty())
            {
                while(!index.empty() && temperatures[i] > temperatures[index.top()])
                {
                    ans[index.top()] = i - index.top();
                    index.pop();
                }
                index.push(i);
            }
            else
            {
                index.push(i);
            }
        }
        return ans;
    }
};