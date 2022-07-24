 void deleteNode(Node *del)
    {
       // Your code here
   //approach -> just copy del->next->data value in del->data 
   //and move del->next = del->next->next;
       if(del->next==NULL)  
       {
           del=NULL;
       }
       del->data = del->next->data;
       del->next=del->next->next;
      
    }