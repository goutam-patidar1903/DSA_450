class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        while(n>0)
        {
            if(n&1) cnt++;
            n=n>>1;
        }
        if(cnt==1) return true;
        return false;
        
        // if(n==0) return false;
        // if( (n & (n-1)) == 0 ) return true;
        // return false;
    }
};