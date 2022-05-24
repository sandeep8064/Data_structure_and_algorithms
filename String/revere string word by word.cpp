
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
string reverse_string_words( string a)
{   
   reverse(a.begin(),a.end());
   a.insert(a.end(),' ');  //inserting space at end
   int n = a.size();
   int j=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]== ' ')
           
           {
               reverse(a.begin()+j,a.begin()+i);
               j=i+1;
           }
   }
   
   a.pop_back(); //remove the inserted space
   return a;
}

int main()
{
  string a = "i like this code";
  
  cout<<reverse_string_words(a);
    return 0;
}
