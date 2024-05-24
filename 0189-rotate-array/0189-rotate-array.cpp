class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        if(size==1) return;
        k=k%size;
        vector<int> temp;
        int x=size-k;
        for(int i=0;i<size;i++)
        {
            temp.push_back(nums[(x+i)%size]);
        }
        for(int i=0;i<size;i++)
        {
            nums[i]=temp[i];
        }
        
        
        // int size=nums.size();
        // if(size==1) return;
        // k=k%size;
        // vector<int> tmp;
        // for(int i=1;i<=k;i++)
        // {
        //     tmp.push_back(nums[size-i]);
        // }
        // for(int i=size-k-1;i>=0;i--)
        // {
        //     nums[i+k]=nums[i];
        // }
        // int j=k-1;
        // for(int i=0;i<tmp.size();i++)
        // {
        //     nums[j]=tmp[i];
        //     j--;
        // }
    }
};