void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // reverse row wise
          for(int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        // transpose the matrix
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    } 