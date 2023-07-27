class Solution {
public:
    bool isValid(string s) {
        bool result=false;
        stack<char> st;
        char c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') 
            {
                st.push(s[i]);
            }else
            {   
                if(st.empty()) return false;
                c=st.top();
                st.pop();
                if(s[i]==')' && c=='(') result =true;
                else if(s[i]=='}' && c=='{') result =true;
                else if(s[i]==']' && c=='[') result =true;
                else{ result = false ; break;}
            }
        }
        if(!st.empty()) result = false;
        return result;
    }
};