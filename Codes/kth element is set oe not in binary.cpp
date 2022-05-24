#include<bits/stdc++.h>
using namespace std;

//count number of set(1) bits in a binay representation of a number

int countsetbit(int n)
{
    int res=0;
    while(n>0)
    {
        res++;
        n=n&(n-1);
    }
    
    return res;
}

int main()
{

int n;
cin>>n;
int res =countsetbit(n);
cout<<res<<endl;





        
    return 0;
}