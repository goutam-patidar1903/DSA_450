class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        int x=1,y=1;
        int result;
        for(int i=3;i<=n;i++)
        {
            result=x+y;
            x=y;
            y=result;
        }
        return result;
    }
};