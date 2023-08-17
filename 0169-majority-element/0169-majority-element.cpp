class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(int i=0;i<nums.size();i++)
        {
           m[nums[i]]++; 
        }
        int maxElem,maxCount=0;
        for(auto it:m)
        {
            if(it.second > maxCount)
            {
                maxCount = it.second;
                maxElem = it.first;
            }
        }
            
        
        return maxElem;
    }
};