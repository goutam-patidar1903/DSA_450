class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // vector<vector<int>> tri;
        // for(int i=0;i<=rowIndex;i++){
        //     vector<int> rows(i+1,1);
        //     for(int j=1;j<i;j++) {
        //         rows[j] = tri[i-1][j-1]+tri[i-1][j];
        //     }
        //     tri.push_back(rows);
        // }
        // return tri[rowIndex];
        
         int n = rowIndex;
        vector<int> temp(n+1,1);
        long x = n;
        temp[0] = 1;
            for(int j = 1;j<n+1;j++)
            {
                temp[j] = x;
                x = (x*(n-j))/(j+1);
            }
            
        return temp;
    }
};