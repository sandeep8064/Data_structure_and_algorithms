#include<bits/stdc++.h>
using namespace std;


//number of ways we can reach end of matrix(n-1 index)from start(index 0)

int matrixways(int n,int m)
{
	if(m==1 || n==1)
	{
		return 1;
	}

	return matrixways(n-1,m)+matrixways(n,m-1);  

}
  





int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

      cout<<matrixways(2,2);

	return 0;

    	
}