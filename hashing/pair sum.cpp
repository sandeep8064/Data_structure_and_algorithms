#include<bits/stdc++.h>
using namespace std;

int  pairsum(int a[],int n, int sum)
{
   unordered_set<int> s(a,a+n);
   for(int i=0;i<n;i++)
   {   if(s.find(sum-a[i])!=s.end())
        return true;
        else
       s.insert(a[i]);
   }
   
   return false;
}

int main()
{
	int a[] = {8,3,4,2,5};
    
    cout<<pairsum(a,5,6)<<endl;
    return 0;
}
