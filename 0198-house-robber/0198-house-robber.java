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
        return solveUtil(N-1, nums, dp);
    }
}