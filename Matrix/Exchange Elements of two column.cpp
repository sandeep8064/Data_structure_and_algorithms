void exchangeColumns(vector<vector<int> > &matrix)
    {
        // code here
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0;i<r;i++)
        {
           swap(matrix[i][0],matrix[i][c-1]);
        }
    }