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
        
        
//         unordered_map<int ,int> m;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
            
//            m[nums[i]]++; 
//             // auto it = m.find(nums[i]);
//             // if(it != m.end() && it->second > n/2) return nums[i];
//         }
//         int maxElem,maxCount=0;
//         for(auto it:m)
//         {
//             if(it.second > maxCount)
//             {
//                 maxCount = it.second;
//                 maxElem = it.first;
//             }
//         }
            
        
//         return maxElem;
    }
};