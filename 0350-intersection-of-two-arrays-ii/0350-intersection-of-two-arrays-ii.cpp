class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mpp;
        
        for (int n : nums2) {
        mpp[n]++;
    }
        
        vector<int> result;
        for(int n : nums1){
            if(mpp[n]){
                result.push_back(n);
                mpp[n]--;
            }
        }
return result;
    }
};