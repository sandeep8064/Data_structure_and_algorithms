vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
       int i;
        vector<vector<int>> ans;
        int row1=A.size();//3
        int col1=A[0].size();//2
        int row2=B.size();//3
        int col2=B[0].size();//2
        if(row1!=row2 || col1!=col2) // check if rows and col are equak if not return empty ans
        {
            return ans;
        }
        for(int i=0;i<row1;i++)
        {
            vector<int> v;
            for(int j=0;j<col1;j++)
            {
                v.push_back(A[i][j]+B[i][j]);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }