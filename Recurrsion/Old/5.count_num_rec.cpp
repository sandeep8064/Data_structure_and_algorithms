// Count number of digits using recursion
#include<iostream>
using namespace std;
int count(int n)
{
// base
if(n==0) return 0;
//recurs
int smallans = count(n/10);
//cal
return smallans+1;    
}
int main()
{
cout<<count(0)<<endl;
return 0;    
}