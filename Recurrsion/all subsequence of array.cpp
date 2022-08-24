#include<bits/stdc++.h>
using namespace std;


void subsequences(int arr[],vector<int> &v, int i,int n)
{

if(i>=n)
{   
	if(v.size()==0)
		cout<<"{}";

	for(auto j : v)
	{
		cout<<j;
	}

	cout<<endl;
	return;
}

v.push_back(arr[i]);  //take 

subsequences(arr,v,i+1,n);

v.pop_back(); //not take

subsequences(arr,v,i+1,n);



}    






int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 

 
int arr[]={1,2,3};
vector<int> v;

subsequences(arr,v,0,3);
  
  
  	

  return 0;
}

    	
