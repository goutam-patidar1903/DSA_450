class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<(size-1);i++)
        {   
            if(nums[i]>nums[i+1]) 
            {
                i++;
                for(int j=0;j<(size-1);j++)
                {
                    if(nums[i]>nums[(i+1)%size]) { return false; }
                    i=(i+1)%size;
                }
                return true;
            }
        }
        return true;
    }
};