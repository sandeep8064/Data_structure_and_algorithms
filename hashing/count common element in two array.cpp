#include<bits/stdc++.h>
using namespace std;

int  countcommonelements(int a[], int b[], int n,int m)
{
   unordered_set<int> s(a,a+n);
   for(int i=0;i<n;i++)
   {
       s.insert(b[i]);
   }
   
   return s.size();
}

int main()
{
	int a[] = {10,30,40,10};
    int b[]= {40,5,10,15};
    cout<<countcommonelements(a,b,4,4)<<endl;
    return 0;
}
