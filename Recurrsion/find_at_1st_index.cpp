#include<iostream>
using namespace std;
int toh(int n)
{
if(n==0) return 0;
return toh(n-1)+1+tow(n-1);  
}
void steps(int n, char s, char h , char d )
{
if(n==0)
return 0;
steps(n-1,s,d,h);
cout<<"Moving Disc"<<n<<"From"<<s<<"To"<<d<<endl;
cout<<steps(n-1,d,s,h);    
}
int main()
{
cin>>n;
cout<<toh(n)<<endl;
steps(n,'A','B','C');
return 0;    
}