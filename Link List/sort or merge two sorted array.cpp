ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
      ListNode* temp = new ListNode();
      ListNode* dummy = temp;
      
      while(list1!=NULL && list2!=NULL)
      {
        if(list1->val < list2->val)
        {
            dummy->next = list1;
            list1=list1->next;
        }
        else
        {
          dummy->next = list2;
          list2= list2->next;
        }
        
        dummy = dummy->next;
       
      }
      
      if(list1) dummy->next = list1;
      if(list2) dummy->next = list2;
      
      return temp->next;
    }