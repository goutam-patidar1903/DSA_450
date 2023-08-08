class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int k=0,m=0;
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++)
        {
            if(um[s[i]]) 
            {
                k=0;
                i=um[s[i]]-1;
                um.clear();
            }else{
                um[s[i]]=i+1;
                k++;
                m=max(k,m);
            }
        }
        return m;
    }
};