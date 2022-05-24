#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int num = x;
    int rev=0;
    while(num!=0)
    {
        rev =rev*10+num%10; 
        num=num/10;
    }

     if(x==rev)
      cout<<"Pallindrone"<<endl;
      else
      cout<<"Not pallindrome"<<endl;
    return 0;
}