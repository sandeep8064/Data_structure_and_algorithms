 vector<int> boundaryTraversal(vector<vector<int> > matrix, int row, int col) 
    {
        // code here
        vector<int> v; //if row amd col equal to 1 then we separately handle these case else
        if(row==1)  //we just run loop 4 time
        {
            for(int i=0;i<col;i++)
            {
                v.push_back(matrix[0][i]);
            }
        }
        else if(col==1)
        {
            for(int i=0;i<row;i++)
            {
                v.push_back(matrix[i][0]);
            }
        }
        else
        {
        for(int i=0;i<col;i++)   
        v.push_back(matrix[0][i]);
        
        for(int i=1;i<row;i++)
        v.push_back(matrix[i][col-1]);
        
        for(int i=col-2;i>=0;i--)
        v.push_back(matrix[row-1][i]);
        
        for(int i=row-2;i>=1;i--)
        v.push_back(matrix[i][0]);
        
        }
        
        return v;
    }   