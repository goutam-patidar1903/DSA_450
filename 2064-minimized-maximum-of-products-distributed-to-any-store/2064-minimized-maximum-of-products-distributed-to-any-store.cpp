class Solution {
public:
     bool canDistribute(const vector<int>& quantities, int n, int maxProducts) {
        int storeCount = 0;
        for (int q : quantities) {
            storeCount += (q + maxProducts - 1) / maxProducts; 
            if (storeCount > n) return false; 
        }
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 1, right = *max_element(quantities.begin(), quantities.end());
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canDistribute(quantities, n, mid)) {
                result = mid; 
                right = mid - 1;
            } else {
                left = mid + 1; 
            }
        }
        return result;
    }
};