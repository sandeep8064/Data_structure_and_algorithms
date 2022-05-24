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


BT *takeinputlevelwise()
{
 int rootdata;
 cout<<" Enter data :"<<endl;
 cin>>rootdata;
 if(rootdata==-1)
 {
     return NULL;
 }
 BT *root = new BT(rootdata);
 queue<BT*> q;
 q.push(root);
 while(!q.empty())
 {
 BT *f = q.front();
 q.pop();
 cout<<"Enter the left child of "<<f->data<<endl;
 int leftchildData;
 cin>>leftchildData;
 if(leftchildData!=-1)
 {
    BT *child = new BT (leftchildData);
    q.push(child);
    f->left = child;
 }
 cout<<"Enter the right child of "<<f->data<<endl;
 int rightchildData;
 cin>>rightchildData;
 if(rightchildData!=-1)
 {
    BT *child = new BT (rightchildData);
    q.push(child);
    f->right = child;
 }
 }

return root;
   
}

int count (BT *root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return count(root->left)+count(root->right)+1;
}


void inorder(BT *root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void preorder(BT *root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(BT *root)
{
    if(root==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main()
{   
    BT *root = takeinputlevelwise();
    print(root);
    cout<<" No. of Nodes = "<<count(root)<<endl;
    cout<<"inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;
    
    return 0;
}