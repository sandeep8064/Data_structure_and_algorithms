#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    
    return max;
}


int main()
{
    int a[]={5,7,2,4,1};
    
    cout<<largest(a,6)<<endl;
  
   
     return 0;
}