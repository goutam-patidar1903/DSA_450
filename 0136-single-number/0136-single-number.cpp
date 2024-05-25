class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second==1) 
            {
                ans=it.first;
                break;
            }
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // map<int,int> m;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // for(auto it : m)
        // {
        //     if(it.second==1) return it.first; 
        // }
        // return -1;
    }
};