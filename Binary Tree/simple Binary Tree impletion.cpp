#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class BT{
    public:
    int data;
    BT *left;
    BT *right;
    
    BT( int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
    
    ~BT()
    {
        delete left;
        delete right;
    }
};



void print( BT *root)
{
    if(root == NULL)
    {
        return;
    }
    
 cout<<root->data<<" : ";   
if(root->left!=NULL)
{
    cout<<"L:"<<root->left->data<<" ";
}
if(root->right!=NULL)
{
    cout<<"R:"<<root->right->data;
}
cout<<endl;

print(root->left);
print(root->right);

}


BT *takeinput()
{
 int rootchild;
 cout<<" Enter data :"<<endl;
 cin>>rootchild;
 if(rootchild==-1)
 {
     return NULL:
 }
 
 BT root = new root(rootchild);
 BT *leftchild = takeinput();
 BT *rightchild = takeinput();
 root->left=leftchild;
 root->right=rightchild;
 
 return rootchild;
   
}

int main()
{   
    BT *root = takeinput();
    print(root);
    
}