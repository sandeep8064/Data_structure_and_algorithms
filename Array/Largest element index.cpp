#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)
{
    int max=a[0];
    int res;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            res=i;
    }
    
    return res+1;
}


int main()
{
    int a[]={5,2,4,20,1};
    
    cout<<largest(a,5)<<endl;
  
   
     return 0;
}