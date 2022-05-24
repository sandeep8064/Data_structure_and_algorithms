#include<bits/stdc++.h>
using namespace std;

int consecutive1(int a[],int n)
{
    int res=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]!=1)
            count=0;
            else
            {
                count++;
                res=max(count,res);
            }
    }
    
    return res;
}
       
int main()
{
    int a[]={0,1,1,0,1,1,1};
    
    cout<<consecutive1(a,7)<<endl;
   
     return 0;
}