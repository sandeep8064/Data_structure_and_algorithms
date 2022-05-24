#include<iostream>
#include<vector>
using namespace std;

class treenode
{
public:
    int data;
    vector<treenode*> child;
    
    treenode(int data)
    {
        this->data=data;
    }
};
    
void printtree(treenode *root)  
{
if(root==NULL)
{
 return;    
}  

cout<<root->data<<" : ";

for(int i=0;i<root->child.size();i++ )  
{
    cout<<root->child[i]->data<<" , ";                //printing all child nodes to have better understanding of the tree
}

cout<<endl;

for(int i=0;i<root->child.size();i++ )  
{
    printtree(root->child[i]);            //recursively printing the childrens of root node
}
}

treenode* takeinput()
{
int rootdata;
cout<<"Enter root data :"<<endl;
cin>>rootdata;
treenode *root = new treenode(rootdata);
int children;
cout<<"Enter number of children :"<<endl;
cin>>children;
for(int i=0;i<children;i++)
{
   treenode* n = takeinput();      //recursively creating nodes 
   root->child.push_back(n);       //linking child to root
}
  return root;                     //will return root pointer 
}


int main()
 {
 
 treenode* root = takeinput();    
 printtree(root);
    
     return 0;
 }