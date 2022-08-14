#include<bits/stdc++.h>
using namespace std;



void solution(int n, int i,int &sum)
{
    
    if (n == i)
         {
          sum+=n;
          return;
         } 
   
     sum+=i;
   solution(n,i+1,sum);
}





int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 int sum=0;

 solution(5,1,sum);
  
  
  	cout<<sum<<endl;

  return 0;
}
