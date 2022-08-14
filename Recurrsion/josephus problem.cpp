int sol(int n,int k)
{   //Your code here
   
     if(n==1)
     return 0;
   
 return  (sol(n-1,k)+k)%n; 
}
    int josephus(int n, int k)
    {
       //Your code here
       
       return sol(n,k)+1;
    }