class Solution {
public:
    int reverse(int x) {
        int i,j=0;
        while(x!=0)
        {
            i=x%10;
            if((j<INT_MIN/10)||(j>INT_MAX/10)) return 0;
            j=(j*10)+i;
            x=x/10;
        }
        return j;
    }
};