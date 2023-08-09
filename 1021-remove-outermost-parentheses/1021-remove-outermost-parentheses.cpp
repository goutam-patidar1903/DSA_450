class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> stk;
        for(char i:s)
        {
            if(i=='(')
            {
                if(!stk.empty())
                {
                    result.push_back(i);
                }
                stk.push(i);
            }
            else
            {
                stk.pop();
                if(!stk.empty())
                {
                    result.push_back(i);
                }  
            }
        }
        return result;
    }
};