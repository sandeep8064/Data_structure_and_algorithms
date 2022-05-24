#include<iostream>
#include<queue>
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

treenode* takeinputlevelwise()
{
int rootdata;
cout<<"Enter root data :"<<endl;
cin>>rootdata;
treenode *root = new treenode(rootdata);
queue <treenode*> q;
q.push(root);
while(!q.empty())
{    
treenode* f = q.front();
q.pop();
int children;
cout<<"Enter number of children of "<<f->data<<" :"<<endl;
cin>>children;
for(int i=1;i<=children;i++)
{  int childdata;
   cout<<"Enter "<<i<<" children of "<<f->data<<endl;
   cin>>childdata;
   treenode* n = new treenode(childdata); 
   q.push(n);
   f->child.push_back(n);    
}
}
  return root;                         
}


void printlevelwise(treenode* root)
{
queue<treenode*> q;
q.push(root);    

while(!q.empty())
{
 treenode* f = q.front();
q.pop(); 
cout<< f->data<<" : ";
for(int i=0;i<f->child.size();i++)
{
 cout<<f->child[i]->data<<",";   
}    
cout<<endl;
 for(int i=0;i<f->child.size();i++)
{
    q.push(f->child[i]);
}
}
   
}

int count( treenode* root)
{
int ans =1;
for(int i=0;i<root->child.size();i++)
{
    ans = ans + count(root->child[i]);
}    
return ans;
}

int height (treenode* root)
{
 int max=0;
for(int i=0;i<root->child.size();i++)
{
int childheight = height(root->child[i]);
if(childheight>max)
{
    max=childheight;
}    
} 
return max+1;                                 //+1 due to root  
}

int main()
 {
 
 treenode* root = takeinputlevelwise();    
 printlevelwise(root);
 cout<<endl;
 cout<<"No. of Nodes in Tree is "<<count(root)<<endl;
 cout<<endl;
 cout<<"Height of Tree is "<<height(root)<<endl;
 
    
     return 0;
 }