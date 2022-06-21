vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> v;
      
        for(int i=0;i<n-k+1;i++)
        {    
            int m=arr[i];
              
            for(int j=0;j<k;j++)
            {   
               if(arr[i+j]>m)     // we will check from i to k  i.e  i+j 
                 m=arr[i+j];
                
            }
            
            v.push_back(m);
           
        }
        
        return v;
    }