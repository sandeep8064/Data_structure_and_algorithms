#include<iostream>
#include<stack>
using namespace std;
 int main()
 {   
 stack<int> a; 
 a.push(1);
 a.push(2);
 a.push(3);
 a.push(4);
 a.push(5);
 a.push(6);
 cout<<a.top()<<endl;
 a.pop();
 cout<<a.top()<<endl;
 a.pop();
 cout<<a.top()<<endl;
 a.pop();
cout<<a.empty()<<endl;
cout<<a.size()<<endl;

while(!a.empty())   // code to print the stack 
{
cout<<a.top()<<endl;
a.pop() ;   
}

cout<<a.size()<<endl;
}
