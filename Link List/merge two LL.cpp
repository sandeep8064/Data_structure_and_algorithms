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

node* merge(node *a, node *b ) //refer to lecture 68
{  
if(a==NULL) return b;
if(b==NULL) return a;

node *newhead = NULL;
if(a->data < b->data)
{
  newhead = a;
  newhead->next = merge(a->next , b);
}  
else{
    newhead = b;
    newhead->next = merge(a, b->next);
} 
return newhead;
}


int main()
{
node *head1 = list();
node *head2 = list();
node *head = merge(head1,head2);  //updated value of head 
print(head);
return 0;
}
