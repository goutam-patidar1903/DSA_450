class Solution {
    private:
    int sumByD(vector<int>& nums, int d)
    {
            int n=nums.size();
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum += ceil((double)(nums[j]) / (double)(d));
            }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1 , high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sumValue=sumByD(nums , mid);
            if(sumValue <= threshold) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};