class Solution {
public:
    int mySqrt(int x) {
        int l=0, r=x;
        int ans=0;
        while(l<=r){
            long long mid = (l+r)/2;
            if((mid*mid)==x) {
                return mid;
            }
            else if((mid*mid)>x) r=mid-1;
            else {
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};