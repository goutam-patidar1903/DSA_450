class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int size1=nums1.size();
        int size2=nums2.size();
        int i=0 , j=0;
        while(i < size1 && j < size2)
        {
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }  
            else{
               ans.push_back(nums2[j]);
                j++; 
            }
        }
        while(i<size1)
        {
           ans.push_back(nums1[i]);
                i++; 
        }
        while(j<size2)
        {
             ans.push_back(nums2[j]);
                j++;
        }
        
       int n = size1 + size2;
    if (n % 2 == 1) {
        return (double)ans[n / 2];
    }

    double median = ((double)ans[n / 2] + (double)ans[(n / 2) - 1]) / 2.0;
    return median;
        
        // return -1;
    }
};