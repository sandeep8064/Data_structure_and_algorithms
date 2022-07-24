int getMiddle(Node *head)
    {
        // Your code here
        Node* temp = head;
        int count =0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
         
      
        int mid = count/2;
        
        for(int i=0;i<mid;i++)
        {
            head=head->next;
        }
        
        return head->data;
    }