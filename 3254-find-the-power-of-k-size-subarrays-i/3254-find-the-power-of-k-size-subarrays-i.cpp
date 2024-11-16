class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> ans(n-k+1);
//         for(int i=0;i<n;i++){
            
//             if((i+k-1)>=n) return ans;
//             else {
//                 int j;
//                 for(j=i+1;j<(i+k);j++) {
                    
//                     if(nums[j]-nums[j-1] != 1) {
//                         ans[i]=-1;
//                         break;
//                     }
//                 }
//                 if(ans[i] != -1)ans[i]=nums[j-1];
//             }
            
//         }
//         return ans;
        
        if (k == 1)  return nums;  

        int length = nums.size();
        vector<int> result(length - k + 1, -1);  
        int consecutiveCount = 1; 

        for (size_t index = 0; index < length - 1; index++) {
            
            if (nums[index] + 1 == nums[index + 1])   consecutiveCount++;
            else   consecutiveCount = 1; 
            
            if (consecutiveCount >= k) result[index - k + 2] = nums[index + 1];
            
        }

        return result;
        
    }
};