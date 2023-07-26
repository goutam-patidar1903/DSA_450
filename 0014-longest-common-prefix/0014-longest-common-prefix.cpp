class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++)
        {   
            string add="";
            string tmp = strs[i];
            for(int j=0;j<tmp.length();j++)
            {
                if(prefix[j]==tmp[j]) add.push_back(tmp[j]);
                else break;
            }
            prefix=add; 
        }
        return prefix;
    }
};