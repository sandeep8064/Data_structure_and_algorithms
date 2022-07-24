 bool sol(int n, int x)
   {
       if(n%x==0)
       return 0;
       
       if(x>n)    //if index to be deleted is greater than n itself than n is lucky
       return 1;
       
       sol(n-(n/x),x+1); //in each iteration n will decrese by n/x e.g 1st iteration 5-5/2 in third 5-5/3 and so on
   }
    bool isLucky(int n) {
        // code here
       return sol(n,2);
        
    }