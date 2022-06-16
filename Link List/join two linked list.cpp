Node * joinTheLists(Node * head1, Node * head2)
{
    //Your code here
    Node* t = head1;
    while(t->next!=NULL)
    {
        t = t->next;
    }
    
     t->next=head2;
    
    return head1;
}