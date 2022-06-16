  struct Node* reverseList(struct Node *head)
    {
        // just reverse the array connections
       Node* dummy = NULL;  //create a dummy node, our first node will point to null
                                
       while(head)
       {    
            
            Node* next = head->next;  //next will point to head next so we dont lose ll
            head->next=dummy;  // now we detach head and point towards dummy
            dummy=head;  //we move dummy backward as it will be out head pointing to last ele
            head=next;   //move will move toward next
            
       }
    return dummy;
    }