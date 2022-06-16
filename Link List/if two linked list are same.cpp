bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node *temp = head1;
   Node *curr = head2;
   while(temp != NULL && curr != NULL) {
       if(temp -> data != curr -> data) {
           return false;
       }
       temp = temp -> next;
       curr = curr -> next;
   }
   if(temp != NULL || curr != NULL) {
       return false;
   }
   return true;
}