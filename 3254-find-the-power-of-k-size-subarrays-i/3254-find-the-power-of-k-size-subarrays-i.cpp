class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);
        for(int i=0;i<n;i++){
            
            if((i+k-1)>=n) return ans;
            else {
                int j;
                for(j=i+1;j<(i+k);j++) {
                    
                    if(nums[j]-nums[j-1] != 1) {
                        ans[i]=-1;
                        break;
                    }
                }
                if(ans[i] != -1)ans[i]=nums[j-1];
            }
            
        }
        return ans;
    }
};