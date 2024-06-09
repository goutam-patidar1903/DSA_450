class Solution {
    void generateSubsets(int index, vector<int>& temp, vector<int>& nums, vector<vector<int>>& ans)
    {
        if(index >= nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        generateSubsets(index+1, temp, nums, ans);
        temp.erase(find(temp.begin(),temp.end(),nums[index]));
        generateSubsets(index+1, temp, nums, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        generateSubsets(0, temp, nums, ans);
        
        return ans;
    }
};