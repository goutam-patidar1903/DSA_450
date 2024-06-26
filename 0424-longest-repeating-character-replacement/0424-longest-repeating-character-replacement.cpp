class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> hash(26,0);
        int l=0,r=0;
        int mf=INT_MIN;
        int maxLen=INT_MIN;
            while(r<s.length())
            {
                hash[s[r]-'A']++;
                mf=max(mf,hash[s[r]-65]);
                
                while((r-l+1)-mf > k){
                    hash[s[l]-'A'] --;
                    mf=0;
                    for(int i=0;i<26;i++) mf=max(mf,hash[i]);
                    l++;
                }
                maxLen=max(maxLen,(r-l+1));
                r++;
            }
        return maxLen;
    }
};