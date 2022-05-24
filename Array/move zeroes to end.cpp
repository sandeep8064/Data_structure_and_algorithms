#include<bits/stdc++.h>
using namespace std;

void movezeroestoend(int a[],int n)
{  
    int count=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]!=0)     // swap non zero elements with count (i.e itself)
       {  
           swap(a[i],a[count]);     
           count++;
           
       }
   }
   
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}


int main()
{
    int a[]={1,0,2,0,6};
    
    movezeroestoend(a,5);
    cout<<endl;
   
     return 0;
}