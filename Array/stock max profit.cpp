#include<bits/stdc++.h>
using namespace std;

int stockmaxprofit(int a[],int n)
{    
      int profit=0;
     for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])      
        {
            profit+=a[i]-a[i-1];
        }
            
    }
    
    return profit;
}
       
int main()
{
    int a[]={1,5,3,8,12};
    
    cout<<stockmaxprofit(a,6)<<endl;
   
     return 0;
}