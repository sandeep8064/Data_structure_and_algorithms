
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int leftmost_non_repeating_character ( string a)
{   
    int count[CHAR]={0};
    int n = a.size();
    
    for(int i=0; i<n;i++)
    {
        count[a[i]]++;
    }
     for(int i=0; i<n;i++)
     {
         if(count[a[i]]==1)
             return i;
     }
    
    return -1;
}

int main()
{
  string a = "geeksforgeeks";
  
  cout<<leftmost_non_repeating_character(a);
    return 0;
}
