#include<iostream>
using namespace std;

class stac {
 int *arr;
 int nxtind;
 int cap;
public :
stac (int n ){
  arr = new int(n);
 nxtind =0;
 cap =4;
}
void push( int el)
{
    if(nxtind ==cap) //to check and do go beyond stack size
    {
        cout<<"Stack is full " <<endl;
        return;
    }
    
    arr[nxtind]= el;
    nxtind++;
}
 void pop ()
{
if(nxtind == 0) 
{
    cout<<"stack Empty "<<endl;
    return;
}   
nxtind--;    
}
int top()
{
if(nxtind == 0)
{
    cout<<"stack Empty "<<endl;
    return -1;
}
return arr[nxtind-1];
}
};
 
int main()
{
stac a(4);    
a.push(1);
cout<<a.top()<<endl;
a.push(2);
cout<<a.top()<<endl;
a.push(3);
cout<<a.top()<<endl;
cout<<"***********************************************************"<<endl;
a.pop();
cout<<a.top()<<endl;
return 0;    
}