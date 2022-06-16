bool isSorted(Node * head)
{
    //Your code here
     int inc = 1,dec = 1;
   if(head->next == NULL)
       return 1;
   while(head->next != NULL)
   {
       if(head->data > head->next->data)
       {
           inc = 0;
       }
       if(head->data < head->next->data)
       {
           dec = 0;
       }
       head = head->next;
       
   }
   return inc || dec;
}