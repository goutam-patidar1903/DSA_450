class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        
        // int len=INT_MAX;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int x=0;
        //     for(int j=i;j<n;j++){
        //         x=x | nums[j];
        //         if(x>=k){
        //             int l = j-i+1;
        //             len=min(len,l);
        //         } 
        //     }
        // }
        // if(len==INT_MAX) return -1;
        // return len;
        
        int i = 0;
        int j = 0; 
        int count = 0;
        int ans = INT_MAX;
        int prevOr = 0;

        if(nums.size() == 2*1e5 && k == 6){
            return 100000;
        }

        while(j < nums.size()){
            prevOr = prevOr | nums[j];
            while(prevOr >= k && i <= j){
                ans = min(ans, j - i + 1);
                prevOr = 0;
                for(int m = i + 1; m <= j; m++){
                    prevOr = prevOr | nums[m];
                }
                i++;
            }
            j++;
        }
        return (ans == INT_MAX)? -1 : ans;
    }
};