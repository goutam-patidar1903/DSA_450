class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
//         vector<int> ans;
//         int size1=nums1.size();
//         int size2=nums2.size();
//         int i=0 , j=0;
//         while(i < size1 && j < size2)
//         {
//             if(nums1[i] < nums2[j]){
//                 ans.push_back(nums1[i]);
//                 i++;
//             }  
//             else{
//                ans.push_back(nums2[j]);
//                 j++; 
//             }
//         }
//         while(i<size1)
//         {
//            ans.push_back(nums1[i]);
//                 i++; 
//         }
//         while(j<size2)
//         {
//              ans.push_back(nums2[j]);
//                 j++;
//         }
        
//        int n = size1 + size2;
//        if (n % 2 == 1) return (double)ans[n / 2];

//        return ((double)ans[n / 2] + (double)ans[(n / 2) - 1]) / 2.0;
        
        int n1 = a.size(), n2 = b.size();
    //if n1 is bigger swap the arrays:
    if (n1 > n2) return findMedianSortedArrays(b, a);

    int n = n1 + n2; //total length
    int left = (n1 + n2 + 1) / 2; //length of left half
    //apply binary search:
    int low = 0, high = n1;
    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //calculate l1, l2, r1 and r2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1) r1 = a[mid1];
        if (mid2 < n2) r2 = b[mid2];
        if (mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if (n % 2 == 1) return max(l1, l2);
            else return ((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        //eliminate the halves:
        else if (l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0; //dummy statement

        
    }
};