//https://leetcode.com/problems/generate-parentheses/

class Solution {
    vector<string> ans;

    void buildString(int countOpen, int countClosed, deque<string> q, int n)
    {
        if(countOpen == countClosed && countOpen == n)
        {
            string ret;
            int qSize = q.size();
            for(int i = 0; i < qSize; i++)
            {
                ret += string(q.front());
                q.pop_front();
            }
            ans.push_back(ret);
            return;
        }

        if(countOpen < n)
        {
            q.push_back("(");
            buildString(countOpen + 1, countClosed, q, n);
            q.pop_back();
        }

        if(countOpen > countClosed)
        {
            q.push_back(")");
            buildString(countOpen, countClosed + 1, q, n);
            q.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        deque<string> q;
        buildString(0, 0, q, n);
        return ans;
    }
};