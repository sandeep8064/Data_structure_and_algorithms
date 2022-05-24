//Quicksort using recur
#include<iostream>
using namespace std;
int part(int a[], int s, int e)
{
 int count=0;   
//left
while(a[s]<=a[e])
{
a[s]=a[e];
s++;
count=count+s;    
}

while(a[s]>=a[e])
{
a[e]=a[s];
e--;    
}
return s;    
}
int main()
{
int b[8] ={8,5,2,1,7,3,4}; 
cout<<part(b,0,7)<<endl;   
}