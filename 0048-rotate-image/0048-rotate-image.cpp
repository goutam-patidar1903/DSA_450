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
    }
};