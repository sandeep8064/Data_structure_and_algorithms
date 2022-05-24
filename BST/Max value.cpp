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


bool isBST (BT *root, long long vmin = -10000000000 , long long vmax = 10000000000 )
{
	if(root==NULL)
	{
		return true;
	}
	
	bool left = isBST(root,vmin,root->data)
	bool right = isBST(root,root->data,vmax)
	
	if(left && right && root->data<max && root->data>min)
	{
		return true;
	}
	else{
		return false;
	}
}



int main()
{   
    BT *root = takeinputlevelwise();
    print(root);
	cout<<"Max value"<<BSTmax(root)<<endl;
	
    return 0;
}