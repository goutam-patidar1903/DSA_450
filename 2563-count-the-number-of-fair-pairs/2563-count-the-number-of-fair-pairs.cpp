class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        
        long long totalCount = 0;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1, right = nums.size() - 1;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] >= lower) right = mid - 1;
                else  left = mid + 1; 
            }
            
            int start = left;
            left = i + 1;
            right = nums.size() - 1;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[i] + nums[mid] <= upper) left = mid + 1;
                else  right = mid - 1;
            }
            
            int end = right;
            totalCount += max(0, end - start + 1);
        }
        
        return totalCount;
    }
};