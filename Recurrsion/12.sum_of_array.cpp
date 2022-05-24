// checking an array is sorted or not 
#include<iostream>
using namespace std;
int sum(int a[], int n)
{
if(n==0) return 0 ;
int smallans = sum(a+1,n-1);  //one is reduced from fist pos so a[0]+1 to n-1
return smallans + a[0];
}
int main()
{
int a[]={1,2,3,4,5};    
cout<<"Sum :"<<sum(a,5)<<endl;
return 0;    
}