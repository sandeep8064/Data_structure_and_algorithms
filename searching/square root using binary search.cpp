 long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
       int start=1;
       int end=x;
       int ans =-1;
       while(start<=end)   //using binary search
       {
           int long long mid = (start+end)/2;
           
           if(mid*mid==x)
           return mid;
           else if(mid*mid<x)   //if given number is greater than mid square we take mid as ans
           {                    //we only update moving forward
               ans = mid; 
               start = mid+1;
           }
           else
           {
               end = mid-1;
           }
           
          }
          return ans;
    }