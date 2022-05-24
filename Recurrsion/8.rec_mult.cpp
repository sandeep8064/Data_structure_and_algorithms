// multiplication using recursion
#include<iostream>
using namespace std;
int mult(int x, int y)
{
//base
if(y==0) return 0;
//rec
int smallans=mult(x,y-1);
//cal
return smallans+x;    
}
int main()
{
cout<<mult(5,2)<<endl;  
return 0;  
}