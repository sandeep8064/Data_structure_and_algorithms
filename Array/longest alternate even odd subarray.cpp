#include <bits/stdc++.h>
using namespace std;

int longestevenoddsubarray(int a[],int n)
{    
    int count=1;      // single element is also consider so we take both var =1
    int res=1;
    for(int i=1;i<n;i++)
    {
        if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0))
        {
            count++;
            res = max(res,count);
        }
        else
            count=1;
        
    }
    
 return res;   
}







int main()
{
	int a[]={10,12,14,7,8};
    cout<<longestevenoddsubarray(a,5)<<endl;
	return 0;
}
