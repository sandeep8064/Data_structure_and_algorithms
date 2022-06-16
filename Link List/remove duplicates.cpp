Node *removeDuplicates(Node *head)
{
 // your code goes here
Node* curr = head;
    Node* temp;
    while(curr->next!=NULL){
        if(curr->data == curr->next->data){
            temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else curr = curr->next;
    }
        return head;
    
}