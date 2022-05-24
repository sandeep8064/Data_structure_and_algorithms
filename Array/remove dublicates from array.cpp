#include<bits/stdc++.h>
using namespace std;
//Array need to be sorted to work 
void removeduplicate(int a[],int n)
{
   int b[n],j=0;
   
   for(int i=0;i<n;i++)
   {
       if(a[i]!=a[i+1])     // check if a[0]=a[1]
       {   
           b[j]=a[i];
           j++;
       }
   }
   
   for(int i=0;i<j;i++)
   {
       cout<<b[i]<<" ";
   }
}


int main()
{
    int a[]={2,2,2,2,2,6};
    
    removeduplicate(a,6);
    cout<<endl;
   
     return 0;
}