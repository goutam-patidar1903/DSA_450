class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lb=1;
        int ub=nums.size()-1;
        int cnt;
        while(lb<=ub)
        {
            int mid = lb + (ub - lb) / 2;
            cnt = 0;
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            if(cnt <= mid)
                lb = mid + 1;
            else
                ub = mid - 1;    
        }
        return lb;
    }
};