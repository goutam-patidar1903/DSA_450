class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // my code 
//         vector<int> ans;
//         unordered_map<int,int> m;
        
//         for(int i=0;i<nums1.size();i++) {
//             int n = nums1[i];

//             if(!m[n]) {
//                 m[n]++;
//                 for(int j=0;j<nums2.size();j++){
//                     if(n==nums2[j]){
//                         ans.push_back(n);
//                         j=nums2.size();
//                     }
//                 }
//             }
//         }
        
//         return ans;
        
        
        // optimized code 
    vector<int > result;
    unordered_set<int> set_nums2(nums2.begin(), nums2.end()); 
    unordered_set<int> result_set;

    for (int n : nums1) {
        if (set_nums2.count(n)) {
            result_set.insert(n); 
        }
    }

    // Convert result_set to a vector
    return vector<int>(result_set.begin(), result_set.end());
        
        
    }
};