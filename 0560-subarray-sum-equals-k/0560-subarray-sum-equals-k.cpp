class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,count=0;
        map<int ,int > m;
        m[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem = sum-k;
            count+=m[rem];
            m[sum]++;
        }
        return count;
    }
};