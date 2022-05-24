#include<iostream>
using namespace std;
 
 
 class node{
public:
     int data;
     node *next;

     node( int x)
     {
         this->data=x;
         next=NULL;
     }
 };

class stack
{
public:
node *head;
int size;

stack()
{
    head=NULL;
   size=0;
}
  
void push(int x)
{    
node *n = new node(x);
 n->next=head;
 head=n;
 size++;

}  

void pop()
{
    if(head==NULL)
    {
        cout<<" Stack Empty "<<endl;
        return;
    }
    node *temp;
    temp = head;
    head = head->next;
    temp->next=NULL;     //isolate temp and then delete
    delete temp;
    size--;
}

int seek()
{
     if(head==NULL)
    {
        cout<<" Stack Empty "<<endl;
        return 0;
    }
return head->data;
}

bool isempty()
{
   return size==0;
}

int getsize()
{
  return size;  
}    
};









 
 int main()
 {   
 stack a; 
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
cout<<a.getsize()<<endl;
 }
