class Solution {
    public boolean check(int[] nums) {
        int size = nums.length;
        if(size <= 1) return true;
        int small = nums[0];
        int x=0;
        for(int i=1;i<size;i++){
            if(nums[i] <= small && nums[i] != nums[i-1]) {
                small = nums[i];
                x=i;
            }
        }
        for(int i=0;i<size-1;i++){
            int p = (x+i)%size;
            int q = (x+i+1)%size;
            if(nums[p]>nums[q]) return false;
        }
        return true;
    }
}