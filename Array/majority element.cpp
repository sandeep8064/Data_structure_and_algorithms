#include <bits/stdc++.h>
using namespace std;

int majorityelement(int a[],int n)
{
   
    for(int i=0;i<n;i++)
    {    
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        
        if(count>n/2)
            return i;
    }
    
    return -1;
}







int main()
{
	int a[]={3,8,4,8,8};
    cout<<majorityelement(a,5)<<endl;
	return 0;
}
