void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
   int len =0;
    Node *t = head;
    while(t){
        len++;
        if(len==pos)break;
        t = t->next;
    }
    if(len<pos)return;
    
    Node *newNode = new Node(data);
    newNode->next = t->next;
    t->next = newNode;
}