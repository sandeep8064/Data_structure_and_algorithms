#include<iostream>
#include<queue>
#include<algorithm>
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

BT* BST ( BT* root , int val)
{
	if(root==NULL)
	{
		return NULL;
	}
	
	if(root->data == val)
	{
		return root;
	}
	if(val>root->data)
	{
		return BST(root->right,val);
	}
	if(val<root->data)
	{
		return BST(root->left,val);
	}
	return NULL;
}





int main()
{   
    BT *root = takeinputlevelwise();
    print(root);
	cout<<" Enter the value to searched : "<<endl;
	int val;
	cin>>val;
	if(BST(root,val))
	{
		cout<<" Found "<<endl;
	}
	else 
	{
		cout<< " Not present "<<endl;
	}
	
    return 0;
}