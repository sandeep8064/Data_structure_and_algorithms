#include<bits/stdc++.h>
using namespace std;

void leftrotateone(int a[],int n)
{   
    int temp;
    temp=a[0];
    
   for(int i=0;i<n;i++)
   {
       a[i]=a[i+1];
   }
    
    a[n-1]=temp;
   
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}


int main()
{
    int a[]={1,2,3,4,5};
    
    leftrotateone(a,5);
    cout<<endl;
   
     return 0;
}