#include<bits/stdc++.h>
using namespace std;


void subsequences(int arr[],vector<int> &v, int i,int n,int sum,int target)
{

if(i==n)
{
   if(sum==target)
   {
   	 for(auto j : v)
   	 {
   	 	cout<<j;
   	 }
   	 cout<<endl;
   }

   return;
}



v.push_back(arr[i]); 
sum+=arr[i];
subsequences(arr,v,i+1,n,sum,target);//take

v.pop_back(); 
sum-=arr[i];
subsequences(arr,v,i+1,n,sum,target); //not take





}    






int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 

 
int arr[]={1,2,1};
vector<int> v;

subsequences(arr,v,0,3,0,2);
  
  
  	

  return 0;
}

    	
