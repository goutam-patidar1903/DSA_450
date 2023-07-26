class Solution {
public:
    bool isPalindrome(int x) {
        int size;
        char s[51];
        sprintf(s,"%d",x);
        size=strlen(s);
        int j=size-1;
        int i;
        for(i=0;i<(size/2);i++)
        {
            if(s[i]!=s[j]) break;
            j--;
        }
        if(j<=i) return true;
        return false;
    }
};