class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int s = (nums.size());
        int x[s];
        for(int i=0;i<s;i++)
        {
            x[i]=0;
        }
        int n;
        for(int i=0;i<s;i++)
        {
            n=nums[i];
            if(x[n-1]==1)
            {
                break;
            }
            x[n-1]=1;
        }
        return n;
    }
};