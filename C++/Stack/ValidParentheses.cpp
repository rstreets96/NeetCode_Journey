//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')' )
            {
                if(!stack.empty() && stack.top() == '(')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i] == '}' )
            {
                if(!stack.empty() && stack.top() == '{')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i] == ']' )
            {
                if(!stack.empty() && stack.top() == '[')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                stack.push(s[i]);
            }
        }
        return stack.empty();
    }
};