class Solution {
public:
    int climbStairs(int n) {
        
         if (n == 0 || n == 1) return 1;

        int prev = 1, curr = 1;
        for (int i = 2; i <= n; i++) {
            int tmp = curr;
            curr = prev + curr;
            prev = tmp;
        }
        return curr;
    }
};