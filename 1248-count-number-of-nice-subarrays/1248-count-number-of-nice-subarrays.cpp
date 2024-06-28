class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0;
        int ans=0;
        int ki=0;
        int cnt=0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r]%2 == 1) {
                k--;
                cnt=0;
            }
            
            while(k==0)
            {
                
                if(nums[l]%2 == 1) k++;
                cnt++;
                l++;
            }
            ans+=cnt;

        }
        return ans;
    }
};