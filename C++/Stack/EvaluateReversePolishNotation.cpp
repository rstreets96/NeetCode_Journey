//https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+")
            {
                int a;
                int b;
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b + a);
            }
            else if(tokens[i] == "-")
            {
                int a;
                int b;
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b - a);
            }
            else if(tokens[i] == "*")
            {
                int a;
                int b;
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push(b * a);
            }
            else if(tokens[i] == "/")
            {
                int a;
                int b;
                a = stack.top();
                stack.pop();
                b = stack.top();
                stack.pop();
                stack.push((int)b / a);
            }
            else
            {
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    }
};