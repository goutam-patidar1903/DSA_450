class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        int k,j,index=s-1;
        for(int i=s-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                for(j=i;j<index;j++)
                {
                    nums[j]=nums[j+1];
                }
                nums[index]=0;
                index--;
            }
        }
    }
};