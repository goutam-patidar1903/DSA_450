class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int n_sum=(n*(n+1))/2;
//         int sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum=sum+nums[i];
//         }
       
//         return n_sum-sum;
        int n = nums.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            a=a^nums[i];
            b=b^(i+1);
        }
       
        
        return(a^b);
    }
};