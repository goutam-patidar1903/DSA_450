class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        int x=1,y=1;
        int z=0;
        for(int i=3;i<=n;i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        return z;
    }
};