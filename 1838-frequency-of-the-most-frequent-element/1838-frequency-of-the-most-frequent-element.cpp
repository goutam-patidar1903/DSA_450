class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long left=0;
        long right=0;
        long result=1;
        long sum=0;
        sort(nums.begin() , nums.end());
        while(right < nums.size())
        {
            sum+=nums[right];
            while((nums[right]*(right-left+1)) > (sum+k))
            {
                sum-=nums[left];
                left++;
            }
            result = max(result , right-left+1);
            right++;
        }
        return result;
    }
};