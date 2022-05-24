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


int main()
 {
 treenode *root = new treenode(1);
 treenode *n1 = new treenode(2);
 treenode *n2 = new treenode(3);
 root->child.push_back(n1);
 root->child.push_back(n2);
 printtree(root);
    
     return 0;
 }