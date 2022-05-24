
#include<bits/stdc++.h>
using namespace std;

void match_substring_pattern(string s, string m)
{
    int found = s.find(m);
    
    while( found != string::npos)
    {
        cout<<"Found at "<<found<<endl;
        found = s.find(m,found+1);
    }
}

int main()
{
  string a = "abcaabbbaab";
  string m = "aab";
  
  match_substring_pattern(a,m);
  
 
    return 0;
}
