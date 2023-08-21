class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int i = n-1;
        string ans="";
        if(num[i]%2!=0) return num;
        while(i>=0 && num[i]%2==0) i--;
        for(int j=0;j<=i;j++) ans+=num[j];            
        return ans;
    }
};