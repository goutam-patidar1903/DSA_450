class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int u=nums.size()-1;
        while(l<=u)
        {
            int m=(l+u)/2;
            if(nums[m]==target) return m;
            else if(target<nums[m]) u=m-1;
            else l=m+1;
        }
        return u+1;
    }
};