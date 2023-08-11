class Solution {
public:
    bool isPalindrome(string s) {
        string tmp;
        for(auto c:s)
        {
            if(c>=97&&c<=122) tmp.push_back(c);
            else if(c>=65&&c<=90) tmp.push_back(c+32);
            else if(c>=48&&c<=57) tmp.push_back(c);
        }
        if(tmp.size()==0) return true;
        int i=0;
        int j=tmp.size()-1;
        while(i<j)
        {
            if(tmp[i]!=tmp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};