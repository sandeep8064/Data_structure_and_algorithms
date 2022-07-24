//Fibonaci Using Recursion  e.g 0 1 1 2 3 5 (element = sum of previous 2 elements)


#include <iostream>
using namespace std;
//int main()
//{
//int fir=0,sec=1, n=6;
//cout<<fir<<" "<<sec<<" ";
//for(int i=0;i<n;i++)
//{
//int s;
//s=fir+sec;
//cout<<s<<" ";
//fir=sec;
//sec=s;
//}    
    
//}

int fib(int n)
{
if(n==0) return 0;
if(n==1) return 1;    
int small_ans1=fib(n-1);
int small_ans2=fib(n-2);
return small_ans1+small_ans2;    
}
int main()
{
cout<<fib(4)<<endl;    
}