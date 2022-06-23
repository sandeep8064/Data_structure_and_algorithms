void selectionSort(int arr[], int n)
    {
       
        for(int i=0;i<n-1;i++)  //we select min and swap with current 
      {
          int Min_Idx=i;
          
          for(int j=i+1;j<n;j++)
          {
              if(arr[j]<arr[Min_Idx])
                   Min_Idx=j;
          }
          
          swap(arr[Min_Idx],arr[i]);
      }
    }