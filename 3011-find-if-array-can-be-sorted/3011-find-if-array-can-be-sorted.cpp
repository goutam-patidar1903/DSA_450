class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size() - i - 1; j++) {
                int setcount1=__builtin_popcount(nums[j]);
                int setcount2=__builtin_popcount(nums[j+1]);
                if (setcount1 == setcount2 && nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        //sort karne ke bad se check sort hai ki nahi whole array
        return is_sorted(nums.begin(),nums.end());
    }
};