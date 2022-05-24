#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;   // two numbers gcd of 10 15
    int res = min(x,y);  //initialise res equal to smallest number // 10
    while(x>0)
    {
      if(x%res==0 && y%res==0)
      {
          break;
      }
          
        res--;
    }

    cout<<res<<endl;

    return 0;
}