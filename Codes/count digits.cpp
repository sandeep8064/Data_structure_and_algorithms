#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int count=0;
    while(x!=0)
    {
        count++;
        x=x/10;
    }

    cout<<count<<endl;
    return 0;
}