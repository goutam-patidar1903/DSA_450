class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            while(i<nums.size() && nums[i]==1)
            {
                count++;
                i++;
            }
            if(count!=0) i--;
            ans=max(ans,count);
        }
        return ans;
    }
};