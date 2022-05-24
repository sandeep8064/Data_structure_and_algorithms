#include<bits/stdc++.h>
using namespace std;

// work only if only 1 number is occuring 1 time or esle we will get xor value of all add occring 
int countoddoccurence( vector<int> v)
{
    int res =0;
    for( auto i:v)
    {
        res=res^i;           // xor will cancel out pair // a^a=0 // a^a^a= 0^a= a
    }
    
    return res;
}

int main()
{
    vector<int> v;
    int s,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    
    cout<<countoddoccurence(v)<<endl;
     return 0;
}