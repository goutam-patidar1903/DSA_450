class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        unordered_set<int> s;
        for(auto it:nums)
        {
            s.insert(it);
        }   
        int i;
        for(i=0;i<=size;i++)
        {
           if(s.count(i)==0) break; 
        }
        return i;
    }
};