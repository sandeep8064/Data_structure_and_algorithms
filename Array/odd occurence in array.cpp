#include<bits/stdc++.h>
using namespace std;

int countoddoccurence( int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
         
        int count = 0;
         
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count % 2 != 0)
            return a[i];
    }
    return -1;
}

int main()
{
   
    int v []={1,2,2,1,3};
    
    cout<<countoddoccurence(v,5)<<endl;
     return 0;
}