class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0 , high=nums.size()-1;
        int mini=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]) 
            {
                mini=min(mini,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid])
            {
                mini=min(nums[low],mini);
                low=mid+1;
            }else
            {
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};