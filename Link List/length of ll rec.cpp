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


int len(node *head)
{
if(head==NULL)
{
    return 0;
}    
 int smallans = len(head->next);
 return smallans + 1;
}

int main()
{
node *head = list();
cout<<len(head)<<endl;  //updated value of head 
print(head);
return 0;
}
