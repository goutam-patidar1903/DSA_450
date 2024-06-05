class Solution {
// public:
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     vector<int> vec;
    //     int s=-1 , e=-1;
    //     int low=0 , high=nums.size()-1;
    //     while(low<=high)
    //     {
    //         int mid=(low+high)/2;
    //         if(nums[mid]==target)
    //         {
    //             s=mid;
    //             e=mid;
    //             while(s!=0 && nums[s-1]==target) s=s-1;
    //             while(e!=nums.size()-1 && nums[e+1]==target) e=e+1;
    //             break;
    //         }
    //         else if(nums[mid] > target) 
    //         {
    //             high=mid-1;
    //         }
    //         else
    //         {
    //             low=mid+1;
    //         }
    //     }
    //     vec.push_back(s);
    //     vec.push_back(e);
    //     return vec;
    // }
    
private:
    int lower_bound(vector<int>& nums, int low, int high, int target){
        while(low <= high){
            int mid = (low + high) >> 1;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int startingPosition = lower_bound(nums, low, high, target);
        int endingPosition = lower_bound(nums, low, high, target + 1) - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
    
};