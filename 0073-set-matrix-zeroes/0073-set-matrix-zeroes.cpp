class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        set<int> row;
        set<int> col;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
           }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(row.find(i)!=row.end() || col.find(j)!=col.end() )
               {
                   matrix[i][j]=0;
               }
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int row[n];
        // int col[m];
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             row[i]=1;
        //             col[j]=1;                    
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(row[i]==1 || col[j]==1)
        //         {
        //             matrix[i][j]=0;     
        //         }
        //     }
        // }
    }
};