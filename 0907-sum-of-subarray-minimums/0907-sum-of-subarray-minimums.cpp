class Solution {
public:
    int sumSubarrayMins(vector<int>& nums) {
       const int MOD=1e9+7;
        int length = nums.size();
        vector<int> left(length, -1);
        vector<int> right(length, length);
        stack<int> stk;

        for (int i = 0; i < length; ++i) {
            while (!stk.empty() && nums[stk.top()] >= nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                left[i] = stk.top();
            }
            stk.push(i);
        }

        stk = stack<int>();

        for (int i = length - 1; i >= 0; --i) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                right[i] = stk.top();
            }
            stk.push(i);
        }

        long long sum = 0;

        for (int i = 0; i < length; ++i) {
            sum += static_cast<long long>(i - left[i]) * (right[i] - i) * nums[i] % MOD;
            sum %= MOD;
        }

        return sum;
        
//         long long sum=0;
//         int mini;
//         for(int i=0;i<length;i++) {
//             mini = nums[i];
//             for(int j=i;j<length;j++) {
//                 mini = min(mini,nums[j]);
//                 sum=(sum+mini) % MOD;
//             }
//         }
        
        
//         return sum;
    }
};