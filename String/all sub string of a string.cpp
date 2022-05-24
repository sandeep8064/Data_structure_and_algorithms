#include<bits/stdc++.h>
using namespace std;

void allsubstring( string s)
{
    int set_size = s.length();
    int pow_set_size = pow(2, set_size); // 2^n
 
   
    for(int i = 0; i < pow_set_size; i++)
    {
    for(int j = 0; j < set_size; j++)
    {
        
        if(i & (1 << j))
            cout << s[j];
    }
    cout << endl;
    }
    
}


int main()
{
   string s;
   cin>>s;
   allsubstring(s);
   
  
   
     return 0;
}