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
 int rootdata;
 cout<<" Enter data :"<<endl;
 cin>>rootdata;
 if(rootdata==-1)
 {
     return NULL;
 }
 
 BT *root = new BT(rootdata);
 root->left = takeinput();
 root->right = takeinput();
 
 
 return root;
   
}

int main()
{   
    BT *root = takeinput();
    print(root);
    
}