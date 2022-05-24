#include<bits/stdc++.h>
using namespace std;

void leftrotateone(int a[],int n, int d)
{    
    int b[n];
    for(int i=0;i<d;i++)
    {
        b[i]=a[i];
    }
   for(int i=0;i<n;i++)
   {
       a[i]=a[i+d];
   }
    
   for(int i=0;i<d;i++)
   {
       a[n-d+i]=b[i];    // 5-2+0=3 // 5-2+1=4
   }
   
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}


int main()
{
    int a[]={1,2,3,4,5};
    
    leftrotateone(a,5,2);
    cout<<endl;
   
     return 0;
}