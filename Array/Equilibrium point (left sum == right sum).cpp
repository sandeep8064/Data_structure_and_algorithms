 int equilibriumPoint(long long a[], int n) {
    
        // Your code here
       int cursum=0; //left sum from 0 
       int sum=0;    //right sum sum-cursum
       
      for(int i=0;i<n;i++)
      {
          sum+=a[i];
      }
      
      for(int i=0;i<n;i++)
       {
           sum-=a[i];         //calc right sum 
           
         if(sum==cursum)
         {
             return i+1;;
         }
         cursum+=a[i];
           
       }
       
       return -1;
    }
