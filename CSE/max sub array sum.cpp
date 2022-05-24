#include<bits/stdc++.h>
using namespace std;

int maxsubarraysum(int a[],int n)
{
    
    int sum=0;
    int cur = INT_MIN; // to work with negative
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        
        if(sum<a[i]) 
            sum=a[i];
            
        if(sum>cur)
            cur=sum;
    }
    
    return cur;
}
       
int main()
{
    int a[]={2,3,-8,7,-1,2,3};
    
    cout<<maxsubarraysum(a,7)<<endl;
   
     return 0;
}