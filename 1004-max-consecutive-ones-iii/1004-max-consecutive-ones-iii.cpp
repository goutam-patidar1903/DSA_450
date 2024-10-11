class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;
        int zeroCounter=0;
        int maxLen = 0;
        while(r<nums.size()){
            
            if(nums[r]==0 && zeroCounter<k) zeroCounter++;
            else if (nums[r]==0 && zeroCounter == k) {
                while(l<r && nums[l]!=0) l++;
                l++;
            }
            
            maxLen = max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
    }
};