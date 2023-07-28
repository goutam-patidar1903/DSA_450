class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        // vector<int>::iterator i = nums.begin();
        // vector<int>::iterator j = ans.before_begin();
        // while(i!=nums.end())
        // {
        //     j=ans.insert_after(j,*i);
        //     ++i;
        //}
        int flag=0;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            if(i==(n-1)&&flag==0) 
            {
                i=-1;
                flag=1;
            }
        }
        return ans;
    }
};