 bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        
        int low,mid,high;
        for(int i = 0;i < n;i++){
            low = 0;
            high = m-1;
            while(low <= high){
                mid = (low+high)/2;
                if(matrix[i][mid] < x)
                    low = mid+1;
                else if(matrix[i][mid] > x)
                    high = mid-1;
                else
                    return true;
            }
        }
        return false;
    }