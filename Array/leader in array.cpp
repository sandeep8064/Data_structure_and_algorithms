#include<bits/stdc++.h>
using namespace std;

void leader(int a[],int n)
{    
    
    for(int i=0;i<n;i++)
    { 
        int j;
        for( j=i+1;j<n;j++)
        {
            if((a[i]<=a[j]))
                break;
        }
        
       if(j==n)             // j==n means loop didnt break
           cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={7,10,4,10,6,5,2};
    
    leader(a,7);
    cout<<endl;
   
     return 0;
}