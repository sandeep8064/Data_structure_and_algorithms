  void quickSort(int arr[], int low, int high)
   {
       if(low < high ){
       int pivot = partition(arr,low,high);
       quickSort(arr,low,pivot-1);
       quickSort(arr,pivot+1,high);
       }
        
   }
   public:
  int partition (int arr[], int l, int h)
  {
          int pivot = arr[l];
          int i = l ;
          int j=h;
      while(i<j)
      {
          while(arr[i]<=pivot)
          i++;
          while(arr[j]>pivot)
          j--;
          if(i<j)
          swap(arr[i],arr[j]);
      }
      swap(arr[j],arr[l]);
      return j;
    }