Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    
    Node* t = head;
    if(pos==1)
    {
       head = head->next;
       return head;
    }
        
    for(int i=0;i<pos-2;i++)
    {
        t = t->next;
    }
    
    
      t->next = t->next->next;
     
     
     return head;
}