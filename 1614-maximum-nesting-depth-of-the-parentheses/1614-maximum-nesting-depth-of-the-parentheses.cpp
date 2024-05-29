class Solution {
public:
    int maxDepth(string s) {
        int max_count=0;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            if(s[i]==')')
            {
                int count = st.size();
                max_count = max(max_count,count);
                st.pop();   
            }
            
        }
        return max_count;
    }
};