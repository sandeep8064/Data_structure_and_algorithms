vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> v;  //cause we need to push 2,3 so we need 2d vector
  if(node==NULL)
      return v;
  queue<Node*> q;
  q.push(node);   //insert root node
  while(!q.empty())
  {
      int size = q.size();  // cur q has 1 node in 2nd itr q will have 2 node
      vector<int> ans;
     for(int i=0;i<size;i++)
     {
         Node* root = q.front();  //take the node from q and remove
         q.pop();
         if(root->left!=NULL)   //if left root exist then push into q
           q.push(root->left);
         if(root->right!=NULL)
          q.push(root->right);
          
          ans.push_back(root->data); //push the value of root taken
     }
     
     v.push_back(ans); 
  }
  
  return v;
}