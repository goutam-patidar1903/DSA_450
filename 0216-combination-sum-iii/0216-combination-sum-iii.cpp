class Solution {
    public:
    
    void dfs(vector<int>& cur, int k, int n, int idx, vector<vector<int>>& ans)
    {
        if (cur.size() == k && n==0)
        {
            ans.push_back(cur);
            return;
        }
        else if (cur.size() == k && n>0) return;
        for (int i = idx; i <= 9; i++)
        {
            cur.push_back(i);
            dfs(cur, k, n-i, i + 1, ans);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> cur;
        dfs(cur, k, n, 1, ans);
        return ans;
    }
};