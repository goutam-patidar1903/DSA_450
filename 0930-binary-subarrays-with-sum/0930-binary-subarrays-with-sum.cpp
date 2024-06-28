class Solution {
private:    
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        int l = 0, r= 0, ans = 0;
        long long sum = 0;
        int n = nums.size();
        for (r= 0; r< n; r++) {
            sum += nums[r];
            while (sum > goal) {
                sum -= nums[l++];
            }
            ans += r - l + 1;
        }
        return ans;
    }
public:

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    
    }
};