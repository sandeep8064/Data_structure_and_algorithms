#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;  
    int res=2;
    bool s=true;
    if(x==1)
        cout<<"Not prime"<<endl;
    while(res!=x)
    {
      if(x%res==0)
      {   
          cout<<"Not Prime"<<endl;
          s=false;
          return s;
          break;
      }
          
        res++;
    }
    
    if(s)
        cout<<"Prime"<<endl;


        
    return 0;
}