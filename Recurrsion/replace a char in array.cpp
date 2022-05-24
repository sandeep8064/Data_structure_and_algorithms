#include<iostream>
using namespace std;
void rep(char a[], char b,char c)
{
if(a[0]=='\0')
{
    return ;
}    
if(a[0]==b)
{
a[0]=c;    
}
rep(a+1,b,c);
}
int main()
{
char a[]= "abcda";
rep(a,'a','x');
cout<<a<<endl;
 return 0;  
}