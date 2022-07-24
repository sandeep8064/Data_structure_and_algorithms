void reverseCol(vector<vector<int> > &matrix)
    {
        // code here
        int n = matrix.size();
        int m = matrix[0].size();
	    for(int i=0;i<n;i++)
	    {
	        reverse(matrix[i].begin(),matrix[i].end());
	    }
	
    }