
int main()
{
   int n;
   cin>>n;
   int pos;
   cin>>pos;
   
   int bitval;  //bit value to be updated
   cin>>bitval;
   
   //first we clear ith bit
   int v=~(1<<pos);
   n=(n&v);
   
   //then we set the bit with either 0 or 1
   v=(bitval<<pos);
   cout<<(n|v)<<endl;
   
  
    return 0;
}