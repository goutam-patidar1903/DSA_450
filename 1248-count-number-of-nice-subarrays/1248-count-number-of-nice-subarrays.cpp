class Solution {
    int atMostCnt(vector<int>& nums, int k) {
        if(k < 0) return 0;
        int l = 0, r= 0, ans = 0;
        long long sum = 0;
        int n = nums.size();
        for (r= 0; r< n; r++) {
            sum += nums[r]%2;
            while (sum > k) {
                sum -= nums[l++]%2;
            }
            ans += r - l + 1;
        }
       
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return atMostCnt(nums,k) - atMostCnt(nums,k-1);
        
//         int l=0;
//         int ans=0;
//         int ki=0;
//         int cnt=0;
//         for(int r=0;r<nums.size();r++)
//         {
//             if(nums[r]%2 == 1) {
//                 k--;
//                 cnt=0;
//             }
            
//             while(k==0)
//             {
                
//                 if(nums[l]%2 == 1) k++;
//                 cnt++;
//                 l++;
//             }
//             ans+=cnt;

//         }
//         return ans;
        
        
//         int ans=0;
//         for(int i=0;i<nums.size();i++) {
//             int oddCnt=0;
//             for(int j=i;j<nums.size();j++) {
//                 if(nums[j] % 2 == 1) oddCnt ++;
//                 if(oddCnt == k) ans++;
//                 if(oddCnt > k) break;
//             }
            
//         }
//         return ans;
    }
};