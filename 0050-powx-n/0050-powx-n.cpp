class Solution {
private:
    long double power(long double a ,long long b) {
    long double res = 1;
    if(b < 0) 
    b = b * -1;

     while(b > 0){
        if(b&1) {
         res = res * a;
    }
    a = a * a;
    b = b >> 1;
    }
    return res;
    }
public:
    double myPow(double x, int n) {
        
        // if(n==0) return 1;
        // if(n<0) {
        //     n = abs(n);
        //     x = 1/x;
        // }
        // if(n%2==0){
        //     return myPow(x*x, n/2);
        // }
        // else{
        //     return x*myPow(x, n-1);
        // }
        
        long double ans = power(x,n);
        long double a = 1;

        if(n < 0) {
            ans = 1 / ans;
        }
        return ans;  
    }
};