//count zero in a number using recv
#include<iostream>
using namespace std;
int count(int n)
{
if(n==0) return 0;
int smallans=count(n/10);   //for breaking number into smaller parts
int l = n%10;
if(l==0)                    // for last digit
return smallans+1;    
else
return smallans;    
}

int main()
{
cout<<count(1)<<endl;
return 0;
    
}