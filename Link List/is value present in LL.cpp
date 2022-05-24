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


bool find(node *head, int data)
{
 while(head!=NULL)
{   
if(head->data == data)
{
    return true;
}    
head=head->next;
}
return false;
}

int main()
{
node *head = list();
cout<<find(head,10)<<endl;  //updated value of head 
print(head);
return 0;
}
