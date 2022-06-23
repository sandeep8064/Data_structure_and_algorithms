 vector<int> levelOrder(Node* node)
    {
      //Your code here
       Node* temp;
       queue<Node*>q;
       vector<int>v;
       q.push(node);
       while(!q.empty())
       {
           temp=q.front();  //  temp = node;
           
           q.pop();
           
           v.push_back(temp->data);
           
           if(temp->left!=NULL) 
           {
           q.push(temp->left);
           }
           
           if(temp->right!=NULL) 
           {
           q.push(temp->right);
           }
       }
     
      
      return v;
    }