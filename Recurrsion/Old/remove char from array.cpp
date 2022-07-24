#include<iostream>
using namespace std;
void rep(char a[], char b=0)
{
if(a[0]=='\0')
{
    return ;
}    
for(int i=0; a[i]!='\0';i++)
{
swap(a[i],a[j]);  
rep(a-1,b);
swap(a[i],a[j]); 
}  
}
int main()
{
char a[]= "abc";
rep(a);
cout<<a<<endl;
 return 0;  
}