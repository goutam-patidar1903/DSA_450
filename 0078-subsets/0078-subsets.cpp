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
        int n = nums.size();
        
        // generateSubsets(0, temp, nums, ans);
        
        for(int i=0;i<(1<<n);i++){
            vector<int> tt;
            
            for(int j=0;j<n;j++){
                if((i & (1<<j)) > 0) tt.push_back(nums[j]);
            }
            
            ans.push_back(tt);
        }
        
        return ans;
    }
};