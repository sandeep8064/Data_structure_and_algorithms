
#include<bits/stdc++.h>
using namespace std;

bool substring ( string a,string b)
{   
    int count =0;
    int n1 = a.size();
    int n2 = b.size();
    
    for(int i=0; i<n1 && count<n2;i++)
    {
        if(a[i]==b[count])
            count++;
    }
    
    return count==n2;
}

int main()
{
  string a = "abcdef";
  string b = "adc";
  
  cout<<substring(a,b);
    return 0;
}
