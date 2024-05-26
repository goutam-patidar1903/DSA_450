class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                q.push(matrix[i][j]);       
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][n-i-1]=q.front();
                q.pop();
            }
        }
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         swap(matrix[i][j] , matrix[j][i]);
        //     }
        // }
        // for(int i=0; i<n ; i++)
        // {
        //     int p=0,q=n-1;
        //     while(p<q)
        //     {
        //         swap(matrix[i][p] , matrix[i][q]);
        //         p++;
        //         q--;
        //     }
        // }
    }
};