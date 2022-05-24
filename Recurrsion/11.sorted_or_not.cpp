// checking an array is sorted or not 
#include<iostream>
using namespace std;
bool check(int a[],int n)
{
if(n==0 || n==1) return true;
if(a[0]>a[1])
return false;
bool smallans= check(a+1,n-1);   
if(smallans)
return true;
else 
return false;    
    
}
int main()
{
int a[5]={1,3,7,8,10};    
cout<<check(a,5)<<endl;
return 0;    
}