 void setZeroes(vector<vector<int>>& matrix) {
       
      int row = matrix.size();
      int col = matrix[0].size();
      
      bool firstrow = false; // we will take first row and column as array to store if zero is 
                             //present or not 
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
          {
            if(matrix[i][j]==0) 
            {
              
              if(i==0) 
              firstrow = true;    //if zero is present in first row 
              else
              {
                matrix[i][0]=0;  //else if zero is present at other rows we will make fist element of that row as  0
              }
              
              matrix[0][j]=0;
            }
          }
          
        }
       
     for(int i=row-1;i>=0;i--) //we are traversing bottom to up to so that we dont interfare with first row and column as they will be used to track 
     {
       for(int j=col-1;j>=0;j--)
       {
         
         if(i==0 && firstrow)
           matrix[i][j]=0;
         
         if(i!=0 && matrix[i][0]==0 || matrix[0][j]==0)
           matrix[i][j]=0;
         
       }
     }
      
     
      
      
      
      
      
      
      
    }