int main()
{
   int n;
   cin>>n;
   int pos;
   cin>>pos;
   
 //to clear last ith bits we left shift -1 by pos
  int v=(-1<<pos); 
   cout<<(n&v)<<endl;
   
  
    return 0;
}