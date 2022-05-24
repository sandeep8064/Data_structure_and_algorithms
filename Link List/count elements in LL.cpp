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
n->next=head;
head=n;
}
cin>>data;
}
return head;   
}    

//counting funtion 
void count(node *head)
{    node *temp=head; 
      int sum =0;
                    
    while(temp!=NULL)
    {
      sum++;
    temp=temp->next;
      
    }
    
    cout<<"No of elements :"<<sum<<endl;
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
    count(head);
    return 0;
}