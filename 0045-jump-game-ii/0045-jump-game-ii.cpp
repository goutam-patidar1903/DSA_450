class Solution {
public:
    int jump(vector<int>& nums) {
         int n=nums.size();
        int l=0;
        int r=0;
        int jumps=0;
        while(r<n-1){
            int far=0;
            for(int i=l;i<=r;i++){
                far=max(far,i+nums[i]);
            }
            jumps++;
            l=r+1;
            r=far;
        }
        return jumps; 
    }
};