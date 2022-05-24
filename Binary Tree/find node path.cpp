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

bool findpath(BT *root, int val, vector<int> &v)
{
	if(root==NULL)
	{
		return false;
	}
	
	v.push_back(root->data);
	bool left = findpath(root->left,val,v);
	bool right = findpath(root->right,val,v);
	
	if(left || right)
	{
		return 1;
	}
	
	v.pop_back();
	return false;
}


int main()
{   
    BT *root = takeinputlevelwise();
    print(root);
	vector<int> v;
	int a;
	cout<<"enter the value whose path is to be find "<<endl;
	cin>>a;
	if(findpath(root,a,v))
	{
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	}
	else 
	{
		cout<<" Value is not present"<<endl;
	}
    
    return 0;
}