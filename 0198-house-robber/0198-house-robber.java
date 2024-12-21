class Solution {
    static int solveUtil(int ind, int[] arr, int[] dp) {
        if (ind < 0) return 0;
        
        if (ind == 0) return arr[ind];
        
        if (dp[ind] != -1) return dp[ind];
        
        int pick = arr[ind] + solveUtil(ind - 2, arr, dp);
        int nonPick = solveUtil(ind - 1, arr, dp);
        
        return dp[ind] = Math.max(pick, nonPick);
    }
    public int rob(int[] nums) {
        int N = nums.length;
        int dp[] = new int [N+1];
        Arrays.fill(dp,-1);
        // return solveUtil(N-1, nums, dp);
        dp[0] = nums[0];
        for(int i=1;i<N;i++){
           int pick = nums[i];
           if (i > 1) pick += dp[i - 2];
           int nonPick = dp[i - 1]; 
            dp[i] = Math.max(pick, nonPick);
        }
        return dp[N-1];
    }
}