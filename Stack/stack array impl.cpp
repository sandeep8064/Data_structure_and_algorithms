#include<iostream>
using namespace std;

class stack
{
    int nxtindex;
    int *ar;
    int cap;
 public:
   
stack(int x)
{
cap=x;    
ar = new int(cap);
nxtindex=0; 
}

bool isempty()
{
    return nxtindex==0;   //if value of nxtindex is zero , then 0==0 which means out stack is empty and a true value is returned
}   
 
void push( int x) 
{
if(nxtindex==cap)
{
    cout<<"stack Full"<<endl;
    return;
}    
ar[nxtindex]=x;
nxtindex++;
}

void pop()
{
if(isempty())
{
    cout<<"stack empty"<<endl;
    return;
}
nxtindex--;
}


int seek()
{
 if(isempty())
 {
    cout<<"stack empty"<<endl;
    return -1;  
 }   
return ar[nxtindex-1];  
}

int size()
{
    return nxtindex;
}







/*void Display()
{
while(p!=-1)
{
    cout<<ar[p]<<" ";
    p--;
}
}*/
};
 
 int main()
 {   
 stack a(4); 
 a.push(1);
 a.push(2);
 a.push(3);
 a.push(4);
 a.push(5);
 cout<<a.seek()<<endl;
 a.pop();
 cout<<a.seek()<<endl;
 a.pop();
 cout<<a.seek()<<endl;
 a.pop();
 
 cout<<a.seek()<<endl;
cout<<a.isempty()<<endl;
cout<<a.size()<<endl;
 }
