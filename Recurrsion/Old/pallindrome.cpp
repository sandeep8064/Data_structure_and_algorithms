#include<iostream>
using namespace std;
bool check(int a[],int s,int e)
{
if(s>e)
return true;
if(a[s]==a[e])
{
return check(a,s+1,e-1);
} 
else 
return false;  
}
int main()
{
int a[]={1,1,1,1};
cout<<check(a,0,3);
return 0;
}