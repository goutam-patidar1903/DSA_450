class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector<int> result;

        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }
        
        for (int n : nums1) {
            mpp[n]++;
        }
        
        for(int n : nums2){
            if(mpp[n]){
                result.push_back(n);
                mpp[n]--;
            }
        }
        return result;
    }
};