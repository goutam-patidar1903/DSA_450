class Solution {
public:
    bool check(vector<int>& nums) {
       int size=nums.size();
        if(size<=1) return true;
        int smallest=nums[0];
        int x=0;
        for(int i=1;i<size;i++)
        {
            if(nums[i]<=smallest && nums[i]!=nums[i-1])
            {
                smallest=nums[i];
                x=i;
            }
        }
        for(int i=0;i<(size-1);i++)
        {
            int p=(x+i)%size;
            int q=(x+i+1)%size;
            if(nums[p]>nums[q]) return false;
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int size=nums.size();
        // for(int i=0;i<(size-1);i++)
        // {   
        //     if(nums[i]>nums[i+1]) 
        //     {
        //         i++;
        //         for(int j=0;j<(size-1);j++)
        //         {
        //             if(nums[i]>nums[(i+1)%size]) { return false; }
        //             i=(i+1)%size;
        //         }
        //         return true;
        //     }
        // }
        // return true;
    }
};