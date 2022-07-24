 bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            
                if(matrix[i][j]==x)
                  return 1;
        }
        
        return 0;
    }