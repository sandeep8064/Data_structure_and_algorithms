#include<bits/stdc++.h>
using namespace std;

bool issorted (int arr[],int n)
{  
    if(n==1)
        return true;
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
         return false;
    }
    
    return true;
}


int main()
{
    int a[]={1,4,6,3};
    
     
    
    if(issorted(a,4))
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
   
     return 0;
}