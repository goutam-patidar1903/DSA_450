class Solution {
public:
    int lengthOfLastWord(string s) {
        cout<<s.length();
        int cnt=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(isspace(s[i])&&cnt!=0) break;
            if(!isspace(s[i])) cnt++;
        }
        return cnt;
    }
};