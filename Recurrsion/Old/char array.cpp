#include<iostream>
using namespace std;
void fun(char a[])
{
if(a[0]=='\0') 
{
return;
}
cout<<a[0]<<" ";
fun(a+1);  
}
void fun1(char a[])
{
if(a[0]=='\0') 
{
return;
}
fun1(a+1); 
cout<<a[0]<<" ";
}
int main()
{
char a[]= "abc";
fun(a);
cout<<endl;
fun1(a);    
}