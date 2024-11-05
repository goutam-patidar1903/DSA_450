class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int , int > m;
        
        for(int i=0;i<nums.size();i++){
            // if(m[nums[i]] && abs(nums[i]-1-i)<=k) return true;
            // if(m[nums[i]]) m.erase[nums[i]];
            //  m[nums[i]]=i+1;
            
             if (m.count(nums[i]) && abs(i - m[nums[i]]) <= k) {
            return true;
        }
        
        m[nums[i]] = i;
            
        }
        return false;
    }
};