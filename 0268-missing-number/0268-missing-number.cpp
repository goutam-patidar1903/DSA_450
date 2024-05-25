class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int n_sum=(n*(n+1))/2;
        return n_sum-sum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n=nums.size();
        // int sum=(n*(n+1))/2;
        // int s=0;
        // for(int i=0;i<n;i++)
        // {
        //     s+=nums[i];
        // }
        // return sum-s;
    }
};