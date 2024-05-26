class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int> mpp;
        int maxElement=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]] > size/2) 
            {
                maxElement=nums[i];   
                return maxElement;
            }
        }
        return maxElement;

    }
};