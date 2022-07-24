vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int usum=0; 
        int lsum=0;
       
        for(int i=0;i<n;i++)
        
            for(int j=i;j<n;j++)  //j=i to move diagonallydry run to check
            {
                usum+=matrix[i][j]; //keep row contant and move col
                lsum+=matrix[j][i]; //keep col contant and move row wise
            }
        
        
        return {usum,lsum};
    }