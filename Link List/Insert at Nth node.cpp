#include<iostream>
using namespace std;

class node
{
 public:
    
    int data;
    node *next;
    
    node (int data)
    {
        this->data=data;
        next=NULL;
    }
};


node* list()
{
int data;    
node *head=NULL;
node *tail=NULL;
cin>>data;
while(data!=-1)
{
node *n = new node(data);
if(head==NULL)
{
head=n;
tail=n;    
}    
else
{
tail->next=n;
tail=n;
}
cin>>data;
}
return head;   
}    


void print(node *head)
{    node *temp=head; //after whileloop head becomes null so to 
                      //avoid it we are using temp 
    while(temp!=NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->next;  
    }
    
    cout<<"NULL"<<endl;
}

node* insert(node *head,int i,int data) //node* as data type to return head
{
    if(i<0)
    {
        return head;
    }
    if(i==0)
    {
      node* n= new node(data);
      n->next=head;
      head=n;  
      return head;
    }
     node* temp = head; //use temporary variable to avoid main head update
    int count=1;                       // code for iteration to I th node 
    while(count<=i-1 && head!=NULL)
    {
    head = head->next; 
      count++;
    }
    if(head)   //if head exist
    {
     node* n = new node(data);
     n->next=head->next;      //connecting newly created node to point it next   
     head->next=n;           //connecting newly created node to previously created node
     return temp;
    }
   else
   return temp; 
}   


int main()
{
node *head = list();
head=insert(head,4,100);  //updated value of head 
print(head);
return 0;
}
