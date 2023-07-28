class SubrectangleQueries {
    private : vector<vector<int>> rectangle;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        // for (int i = 0; i < rectangle.size(); i++)
        // {
        //     for (int j = 0; j < rectangle[i].size(); j++)
        //     {
        //        this->rectangle[i][j]=rectangle[i][j];
        //     }    
        // }
        this->rectangle=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int x=row1;x<=row2;x++)
        {
            for(int y=col1;y<=col2;y++)
            {
                this->rectangle[x][y]=newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return this->rectangle[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */