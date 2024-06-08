class Solution {
private:
    bool isPossible(vector<int>& nums , int s , int k)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            if((sum+nums[i]) <= s)
            {
                sum+=nums[i];
            }
            else
            {
                count++;
                sum=nums[i];
            }
        }
        return count>k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(nums , mid , k)) 
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};