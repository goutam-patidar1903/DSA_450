class Solution {
    // Helper function to calculate max money robbed in a linear array (House Robber problem)
    public static int robLinear(int[] nums) {
        int n = nums.length;
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        int[] dp = new int[n];
        dp[0] = nums[0];
        dp[1] = Math.max(nums[0], nums[1]);
        
        for (int i = 2; i < n; i++) {
            dp[i] = Math.max(dp[i - 1], nums[i] + dp[i - 2]);
        }
        
        return dp[n - 1];
    }
    public int rob(int[] nums) {
         int n = nums.length;
        
        // If there's only one house, rob it.
        if (n == 1) return nums[0];
        
        // Case 1: Rob houses from index 0 to n-2 (exclude last house)
        int case1 = robLinear(Arrays.copyOfRange(nums, 0, n - 1));
        
        // Case 2: Rob houses from index 1 to n-1 (exclude first house)
        int case2 = robLinear(Arrays.copyOfRange(nums, 1, n));
        
        // Return the maximum money robbed
         return Math.max(case1, case2);
    }
}