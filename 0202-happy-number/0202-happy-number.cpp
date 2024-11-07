class Solution {
int sumD(int x) {
        int res = 0;
        while (x > 0) {
            int l = x % 10;
            res += (l * l);
            x /= 10;
        }
        return res;
    }

public:
    bool isHappy(int n) {
        int ss = sumD(n);
        while (1) {
            ss = sumD(ss);
            if (ss == 1) return true;
            if (ss < 10) return false;
        }
    }
};