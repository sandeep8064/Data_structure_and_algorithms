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

int main()
{
   
   node n1(1);
    node n2(2);
    n1.next=&n2;
    node *head = &n1;
    cout << n1.data <<" "<< n2.data <<endl;
    cout<<head->data<<endl;
    return 0;
}