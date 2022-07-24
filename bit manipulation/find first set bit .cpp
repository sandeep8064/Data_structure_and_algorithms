unsigned int getFirstSetBit(int n)
    {
       int count=0;
       
       while(n>0)// odd numbers have 1 at unit place
       {         // even number has 0 at unit place
           if(n%2!=0)
           {
               return ++count;
           }
           else
           count++;
           
           n=n/2;  //keep dividing till n get odd
        
       }
       return count;
       
    }