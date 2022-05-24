#include<bits/stdc++.h>
using namespace std;

int maxdifference(int a[],int n)
{    
    int max= a[1]-a[0];
    
    for(int i=0;i<n;i++)
    { 
        for( int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]>max)
                max=a[j]-a[i];
        }
        
    }
    
    return max;
}

int main()
{
    int a[]={2,3,10,6,4,8,1};
    
   cout<<maxdifference(a,7)<<endl;
   
     return 0;
}