class Solution {
public:
    string minWindow(string s, string t) {
        
        if(t.size() > s.size()) return "";
        
        int cnt=0;
        int minLen=INT_MAX;
        int sIndex=-1;
        unordered_map<char,int> mpp;
        int l=0,r=0;
        
        for(char c:t) mpp[c]++;
        
        while(r<s.size())
        {
            if(mpp[s[r]]>0) cnt++;
            mpp[s[r]]--;
            while(cnt==t.size()) {
                if(minLen > (r-l+1)){
                    minLen=(r-l+1);
                    sIndex=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) cnt--;
                l++;
            }
            r++;
        }
        string ans="";
        if(sIndex != -1) ans = s.substr(sIndex,minLen);
        return ans;
    }
};