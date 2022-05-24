#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;   
    int res = max(x,y);  
    while(true)
    {
      if(res%x==0 && res%y==0)
      {
          break;
      }
          
        res++;
    }

    cout<<res<<endl;

    return 0;
}