class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> res;
        unordered_map<int , int> m;
        for(int i=0;i<(nums.size());i++)
        {
            int num = nums[i];
            int need = target - num;
            auto it = m.find(need);
            if(it != m.end())
            {
                res.push_back(it->second);
                res.push_back(i);
                break;
            }
            m[num]=i;
        }
        return res;    
    }
};