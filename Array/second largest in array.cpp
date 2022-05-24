#include<bits/stdc++.h>
using namespace std;

int secondlargest(int a[],int n)
{
    int max=a[0];
    int temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {   
            temp = max;
            max=a[i];
            
        }
        if(a[i]!=max)
        {
            if(a[i]>temp)
                temp=a[i];
        }
            
    }
    
    return temp;
}


int main()
{
    int a[]={5,12,2,4,20,1};
    
    cout<<secondlargest(a,6)<<endl;
  
   
     return 0;
}