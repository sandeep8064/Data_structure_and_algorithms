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

node* rev(node *head )   //refer to lecture 65
   node *pre = NULL;
   while(cur!=NULL)
   {
       node *n = cur->next;
       cur->next = pre;
       pre = cur;
       cur = n; 
       
   }
 return pre;  
}


int main()
{
node *head = list();
head = rev(head);  //updated value of head 
print(head);
return 0;
}
