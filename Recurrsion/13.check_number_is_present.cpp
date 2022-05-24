#include<iostream>
using namespace std;
bool check(int a[], int n,int item)
{
if(n==0) return false ;

if(a[0]==item)
{
    return true;
}
return check(a+1,n-1,item);
}

int main()
{
int a[]={1,2,3,4,5};    
if(check(a,5,9))
cout<<"Found"<<endl;
else
cout<<"Not found"<<endl;    
return 0; 
}