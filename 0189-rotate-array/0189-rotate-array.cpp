class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if(size==1) return;
        k=k%size;
        vector<int> tmp;
        for(int i=1;i<=k;i++)
        {
            tmp.push_back(nums[size-i]);
        }
        for(int i=size-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        int j=k-1;
        for(int i=0;i<tmp.size();i++)
        {
            nums[j]=tmp[i];
            j--;
        }
    }
};