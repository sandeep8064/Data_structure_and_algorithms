#include<bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
 
    // Adding present element
    // with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];   //prefix sum of prev element + current element = curr element prefix sum
}
       
int main()
{
    int a[]={1,2,3,4,5};
    int p[5];
    
  prefix_sum(a,5,p);
  for( int i=0;i<5;i++)
  {
      cout<<p[i]<<" ";
  }
  cout<<endl;
   
     return 0;
}