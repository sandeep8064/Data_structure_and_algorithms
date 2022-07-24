 void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<n;i++)
        {   
             
            for(int j=0;j<i;j++)  //moving till diagonal only
            {
                swap(matrix[i][j],matrix[j][i]); //swap index matrix[0][1] with matrix[1][0]
            }
        }
    }