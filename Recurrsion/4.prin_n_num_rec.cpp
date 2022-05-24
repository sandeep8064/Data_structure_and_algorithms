// printing n number uisng revur
#include<iostream>
using namespace std;
void pr(int n)
{
    
//base
if(n==0) return;
//rec
pr(n-1);
cout<<n<<" ";   
}
int main()
{
pr(5);
return 0;    
}