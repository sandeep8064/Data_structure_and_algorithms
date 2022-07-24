void preordered(Node* root, vector<int> &v)
{
    if(root==NULL)
     return;
     
     v.push_back(root->data);
     preordered(root->left,v);
     preordered(root->right,v);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  preordered(root,v);
  return v;
  
}