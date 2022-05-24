#include<iostream>
#include<queue>
using namespace std;

int main()
 {
     queue <int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.push(60);
     s.push(70);
     cout<<s.front()<<endl;
     s.pop();
     s.pop();
     s.pop();
     cout<<s.front()<<endl;
     cout<<s.size()<<endl;
     cout<<s.empty()<<endl;
     s.push(60);
     s.push(70);
     s.pop();
     s.pop();
     cout<<s.front()<<endl;
     cout<<s.size()<<endl;
     
     while(!s.empty())
     {
         cout<<s.front()<<endl;
         s.pop();
     }
     
     cout<<s.size()<<endl;
     cout<<s.empty()<<endl;
     return 0;
 }