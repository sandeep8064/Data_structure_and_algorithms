//calculate power using recursion
#include<iostream>
using namespace std;
int p(int y , int x )
{
if(x==0) return 1;
int smallans=p(y,x-1);
return y*smallans;  
}
int main()
{
cout<<p(2,5)<<endl;  
}