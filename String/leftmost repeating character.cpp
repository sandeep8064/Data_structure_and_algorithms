
#include<bits/stdc++.h>
using namespace std;

int leftmost_repeating_character ( string a)
{   
    int n = a.size();
    
    for(int i=0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                return i;
        }
    }
    
    return -1;
}

int main()
{
  string a = "ayoo";
  
  cout<<leftmost_repeating_character(a);
    return 0;
}
