#include<bits/stdc++.h>
using namespace std;


  void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
  swap(arr[start],arr[end]);
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}    
    






int main()
{
   
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 

  int arr[] = {1, 2, 3, 4, 5, 6};

 rvereseArray(arr,0,5);

 for(int i=0;i<=5;i++)
 {
 	cout<<arr[i]<<" ";
 }
  
  
  	

  return 0;
}

    	
