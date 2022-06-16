int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* t = head;
       int count=0;
       while(t)
       {
           count++;
           t = t->next;
       }
       
       if(count<n)
       {
           return -1;
       }
       
       t = head;
       
       for(int i=0;i<count-n;i++)
       {
           t=t->next;
       }
       
       return t->data;
}
