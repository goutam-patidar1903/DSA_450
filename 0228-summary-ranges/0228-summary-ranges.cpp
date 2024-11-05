class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        
        if(n==0) return ans;

        int start = 0;
        for(int end = 1; end <= n; end++) {
            if(end == n || nums[end] != nums[end - 1] + 1) {
                string s = to_string(nums[start]);

                if(start != end - 1) {
                    s += "->" + to_string(nums[end - 1]);
                }
                ans.push_back(s);
                start = end;
            }
        }
        return ans;
    }
};