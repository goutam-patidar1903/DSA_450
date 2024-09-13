class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
     int cnt= 0;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b)
        {
            return a[1]<b[1];
        });
        int i =0;
        while(i<n)
        {
            int b = intervals[i][1];
            while(i+1<n&&b>intervals[i+1][0])
            {
                i++;
                cnt++;
            }
            i++;
        }
        return cnt;   
    }
};