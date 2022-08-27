void clearbitrange(int &n,int i,int j)
{
    //to clear last ith bits we left shift -1 by pos
  int a = (-1 << j + 1);	//
  int b = (1 << i) - 1;		//2^n -1
  int v = (a | b);
  n=(n & v);
}


int main ()
{
  int n;
  cin >> n;
  int m;
  cin>>m;
  int i, j;
  cin >> i >> j;

  clearbitrange(n,i,j);
  
  
   m=(m<<i); //left shift so that we can add it to n
  
  cout<<(m|n)<<endl;
  


  return 0;
}