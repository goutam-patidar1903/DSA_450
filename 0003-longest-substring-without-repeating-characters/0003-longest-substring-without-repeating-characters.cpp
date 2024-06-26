class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxLen=0;
        vector < int > mpp(256, -1);
        for(int r=0;r<s.size();r++)
        {
            char ci=s[r];
            
            if(mpp[ci]>=l)   l=mpp[ci]+1;
            
            mpp[ci]=r;
            
            maxLen=max(maxLen,(r-l+1));
            
            
        }
        return maxLen;
    }
};