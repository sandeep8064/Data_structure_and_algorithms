 vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        vector<vector<int> > ans;
        int row1= A.size();
        int row2 = B.size();
        int col1 = A[0].size();
        int col2 = B[0].size();
        
        
        if(col1!=row2) // only possible if col1 A = row of B
          return ans;
                                  //we will mutiply row of A with col of B and sum it
          for(int i=0;i<row1;i++)  //hold first row 
        {
            vector<int> v;
            for(int j=0;j<col2;j++) //hold second col
            {
                int sum=0;
                for(int k=0;k<row2;k++) //we can choose eaither col1 or row2 
                {
                    sum+=A[i][k]*B[k][j];  // for A i is fixed and B J is fixed k is moving
                }                       
                v.push_back(sum);
            }
            ans.push_back(v);
            
        }
        return ans;
    } 