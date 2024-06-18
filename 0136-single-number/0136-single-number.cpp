class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};