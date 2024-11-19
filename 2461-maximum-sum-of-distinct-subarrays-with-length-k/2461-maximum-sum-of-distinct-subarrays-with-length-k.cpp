class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
//         int left = 0;
//         int right = k-1;
//         long long finalSum = 0;
        
//         while(right<nums.size()){
//             long long sum=0;
//             set<int> st;
//             for(int i=left;i<=right;i++) {
//                 sum += nums[i];
//                 st.insert(nums[i]);
//             }
//             if(st.size()==k) finalSum = max (finalSum, sum);
//             left++;
//             right++;
//         }
        
//         return  finalSum;
        
        long long ans = 0;
        long long currentSum = 0;
        int begin = 0;
        int end = 0;

        unordered_map<int, int> numToIndex;

        while (end < nums.size()) {
            int currNum = nums[end];
            int lastOccurrence =
                (numToIndex.count(currNum) ? numToIndex[currNum] : -1);

            while (begin <= lastOccurrence || end - begin + 1 > k) {
                currentSum -= nums[begin];
                begin++;
            }
            numToIndex[currNum] = end;
            currentSum += nums[end];
            if (end - begin + 1 == k) {
                ans = max(ans, currentSum);
            }
            end++;
        }
        return ans;
    }
};