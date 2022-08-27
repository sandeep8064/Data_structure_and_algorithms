int
main ()
{
  int n;
  cin >> n;
  int i, j;
  cin >> i >> j;

  //to clear last ith bits we left shift -1 by pos
  int a = (-1 << j + 1);	//
  int b = (1 << i) - 1;		//2^n -1
  int v = (a | b);
  cout << (n & v) << endl;


  return 0;
}