#include<bits/stdc++.h>
using namespace std;

int solution( int n,int x)
  {
  	

  if(x==0)
  	return 1;

  return n*solution(n,x-1);



  }





int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

  cout<<solution(4,3);
}
