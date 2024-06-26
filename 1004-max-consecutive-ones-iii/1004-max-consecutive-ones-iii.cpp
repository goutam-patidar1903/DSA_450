class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int maxLen=INT_MIN;
        int x=k;
        while(r<nums.size())
        {
            if(nums[r]==0 && x>0) x--;
            else if(nums[r]==0 && x==0)
            {
               while(l<r && nums[l]!=0) l++;
                l++;
            }
            // cout<<"l = "<<l<<" & r = "<<r<<" & x = "<<x<<endl ;
            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
    }
};