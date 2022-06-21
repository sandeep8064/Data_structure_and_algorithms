long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        int i=1;
          while(i*i<=x)
          {
              i++;
          }
          return i-1;
    }