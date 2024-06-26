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
                
                if((r-l+1)-mf > k){
                    hash[s[l]-'A'] --;
                    l++;
                }
                if((r-l+1)-mf <= k) maxLen=max(maxLen,(r-l+1));
                r++;
            }
        return maxLen;
    }
};