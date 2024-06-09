class Solution {
    void solve(string op ,int open, int close, vector<string>& ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(op);
            return;
        }
        
        if(open == close)
        {
            string op1 = op;
            op1.push_back('(');
            solve(op1, open-1, close, ans);
        }
        else if(open==0)
        {
            string op1 = op;
            op1.push_back(')');
            solve(op1, open, close-1, ans);
        }
        // else if(close == 0){
        //     string op1 = op;
        //     op1.push_back('(');
        //     solve(op1, open-1, close, ans);
        // }
        else
        {
            string op1=op;
            string op2=op;
            op1.push_back('(');
            op2.push_back(')');
            solve(op1, open-1, close, ans);
            solve(op2, open, close-1, ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string op="";
        int open=n , close=n;
        vector<string> ans;
        solve(op, open, close, ans);
        return ans;
    }
};