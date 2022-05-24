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
head=n;     //only 2 line code change to creating ll code to make it reverse ll
tail=n;    
}    
else
{
n->next=head;
head=n;
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

int main()
{
   
    node *head = list();
    print(head);
    return 0;
}