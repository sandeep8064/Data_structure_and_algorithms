#include<bits/stdc++.h>
using namespace std;

bool solution( string s, int start,int end)
  {
  	
  if(start>=end)
  	return true;
  
  if(s[start]!=s[end])
  	return false ;
  

  return solution(s,start+1,end-1);



  }





int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

  cout<<solution("abab",0,3);
}

    	
