class Solution {
public:
    double myPow(double x, int n) {
        // double power=1;
        // if(n==0) return power;
        // if(n<0){
        //     n=n*(-1);
        // for(int i=1;i<=n;i++)
        // {
        //     power=power*(1/x);
        // }
        // }
        // else{
        //     for(int i=1;i<=n;i++)
        //     {
        //         power=power*x;
        //     }
        // }
        // return power;
        
        if(n==0) return 1;
        if(n<0) {
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x, n-1);
        }
        
    }
};