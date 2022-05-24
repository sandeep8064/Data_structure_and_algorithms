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

node* del(node* head,int i) //node* as data type to return head
{
    if(i<0)
    {
        return head;
    }
    if(i==0 && head)
    {
      node *temp = head->next;       // first store the address of the node to be deleted  
      head->next = NULL;             // make the the connection bw before and after of the node to be deleted   (Isolation)
      delete head;                   // after isolation delete the element
      return temp;     
      
    }
    node* temp = head;
    int count=1;                       // code for iteration to I th node 
    while(count<=i-1 && temp!=NULL)
    {
    temp = temp->next; 
    count++;
    }
    
    if(temp && temp->next)   //if head exist
    {    node *cur = temp->next;                 // first store the address of the node to be deleted
        temp->next = temp->next->next; 
         cur->next=NULL;                         // make the the connection bw before and after of the node to be deleted   (Isolation)
        delete cur;                              // after isolation delete the element
        return head;
    }
   else
   return head; 
}   


int main()
{
node *head = list();
head=del(head,1);  //updated value of head 
print(head);
return 0;
}
