class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      
        int sum=0;
        int count=0;
        map<int,int > mpp;
        mpp[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem=sum-k;
            count+=mpp[rem];
            mpp[sum]++;
        }
        return count;
        
    }
};