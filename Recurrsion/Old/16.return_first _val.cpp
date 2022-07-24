#include<iostream>
using namespace std;
int i=0;
int fun(int a[],int n,int x,int i)
{
 i=n-1;   
if(a[i]==x)
{
return i;
}
fun(a,n,x,i-1);   
}
int main()
{
int a[]={1,2,2,4,5,3,5};    
cout<<fun(a,7,3,0)<<endl;    
return 0;
}