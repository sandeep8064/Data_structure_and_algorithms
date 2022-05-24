#include<bits/stdc++.h>
using namespace std;

//count number of set(1) bits in a binay representation of a number

bool isPowerofTwo(int n)
{
    if(n==0)
        return false;
   while(n!=1)   // we divide n until it gives 1 if it dont give 1 then number is not power of 2
   {
       if(n%2!=0)
       {
           return false;
       }
       
           
           n=n/2;
   }
    
    return true;
}

int main()
{

int n;
cin>>n;
bool res = isPowerofTwo(n);
if(res)
    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

return 0;
}