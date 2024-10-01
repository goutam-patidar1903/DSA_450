class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string tmp="";
        for(int i=0;i<s.size();i++)
        {
            tmp=s.substr(i,s.size())+s.substr(0,i);
            if(tmp==goal) return true;
        }
        return false;
    }
};