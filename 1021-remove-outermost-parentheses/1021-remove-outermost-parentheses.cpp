class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && cnt==0) cnt=1;
            else if(s[i]=='(') 
            {   
                result.push_back('(');
                cnt++;
            }
            else if(s[i]==')' && cnt==1) {cnt=0;}
            else{
                result.push_back(')');
                cnt--;
            }
        }
        return result;
    }
};