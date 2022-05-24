//Factorial Using Recursion 


#include <iostream>
using namespace std;
int fact(int n)
{
if(n==0) return 1;
int small_no = fact(n-1);
return n*small_no;   
}
int main()
{
int x=fact(5);
cout<<x<<endl;    
}