class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int j=0,last;
        int n=arr.size();
        for(int i=1;i<=arr[n-1];i++)
        {
            if(i==arr[j]) 
            {
                last=arr[j];
                j++;
            }
            else
            {
                missing.push_back(i);
            }
        }
        if(missing.size()<k)
        {
            for(int j=missing.size();j<k;j++)
            {
                last++;
                missing.push_back(last);
            }
        }
        return missing[k-1];
    }
};