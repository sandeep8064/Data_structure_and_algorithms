#include<iostream>
#include<stack>
using namespace std;

class node{
public:
int data;
node *next;

node(int data)
    {
     this->data = data;
     next=NULL;   
    }
};

class queue{
 public:   
 node *head;
 node *tail;
 int size;
 queue()
 {
     head=NULL;
     tail=NULL;
     size=0;
 }
   
int getsize()
{
 return size;   
}   
 
bool isempty()
{
    return size==0;
} 

 int front()  {
     if(isempty())
     {
        cout<<"queue empty"<<endl;
        return -1;
     }
     return head->data;
 }
  
void push(int x)
{
node *n = new node(x);


if(head == NULL)
{ 
tail=n;
head = n;    
}
else{
tail->next=n;
tail= n;  

}
size++;
} 
 
void pop()
{
if(isempty())
     {
        cout<<"queue empty"<<endl;
        return;
     }    
node *temp = head;
head = head->next;
temp->next=NULL;
delete temp;
size--;
} 
   
};

 
int main()
 {
     queue s;
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
     cout<<s.getsize()<<endl;
     cout<<s.isempty()<<endl;
     s.push(60);
     s.push(70);
     s.pop();
     s.pop();
     cout<<s.front()<<endl;
     cout<<s.getsize()<<endl;
     
     while(!s.isempty())
     {
         cout<<s.front()<<endl;
         s.pop();
     }
     
     cout<<s.getsize()<<endl;
     cout<<s.isempty()<<endl;
     return 0;
 }