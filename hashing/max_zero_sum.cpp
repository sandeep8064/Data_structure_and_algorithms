#include<bits/stdc++.h>
using namespace std;

int  maxzerosum(int a[],int n)
{
   unordered_map<int,int>m;
    int sum = 0;
    int maxLen = 0;
    for(int i = 0 ;i<n;i++)
    {
        sum = sum + a[i];
        if (sum == 0)
        {
            maxLen = i+1;
        }
        else
        {
            if(m.find(sum)!=m.end())
            {
                maxLen = max(maxLen,i-m[sum]);
            }
            else
            m[sum] = i;
        }
        
    }
    return maxLen;
}

int main()
{
	int a[] = { 15, -2, 2, -8, 1, 7, 10, 23 };
    
    cout<<maxzerosum(a,8)<<endl;
    return 0;
}
