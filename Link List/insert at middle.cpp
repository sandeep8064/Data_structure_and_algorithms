Node* insertInMiddle(Node* head, int x)
{
	// Code here
Node *temp = new Node(x);
if(head==NULL)
    return temp;
Node *slow = head,*fast = head;
while(fast->next!=NULL && fast->next->next!=NULL)
{
    fast = fast->next->next;
    slow = slow->next;
}
temp->next = slow->next;
slow->next = temp;
return head;
}