int countbits(int n)
{
    int ans=0;
    
    while(n!=0)
    {
        n=(n&(n-1));
        ans++;
    }
    return ans;
}



int main ()
{
  int n;
  cin >> n;
  int count = 0;

//   while (n != 0 )
//     {
//     if ((n & 1))  //we can check if first bit is set or not by doing and with 1
//     count++;
    
//     n=n>>1;
        
//     }
   
   cout<<countbits(n)<<endl;
	return 0;
    
}