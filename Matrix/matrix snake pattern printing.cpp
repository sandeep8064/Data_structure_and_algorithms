 vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> v;
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {   if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
               v.push_back(matrix[i][j]);   //fist traven from o to n-1
            }
        }
        else
        {
        for(int j=n-1;j>=0;j--)      //second travel from n-1 to 0
        {
            v.push_back(matrix[i][j]);
        }
        }
        
        }
        
        return v;
    }