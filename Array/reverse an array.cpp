#include<bits/stdc++.h>
using namespace std;

void reversearray(int a[],int n)
{
    int b[n],j=0;
    for(int i=n-1;i>=0;i--)
    { 
         b[j]=a[i];
         j++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}


int main()
{
    int a[]={1,2,3,4,5,6};
    
    reversearray(a,6);
    cout<<endl;
   
     return 0;
}