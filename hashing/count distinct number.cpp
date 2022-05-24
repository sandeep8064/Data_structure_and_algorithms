#include<bits/stdc++.h>
using namespace std;

int countdistinct(int a[],int n)
{   
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    return s.size();
}

int main()
{
	int v[] = {15,12,13,12,13,13,18};
    cout<<countdistinct(v,7);
}
