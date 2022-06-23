 void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int k=l;
        int i=l;
        int j=m+1;
        int B[r+1];
        while(i<=m && j<=r)
        { 
            if(arr[i]<arr[j])
                B[k++] = arr[i++];
            else 
            B[k++] = arr[j++];
        }
        for(; i<=m; i++)  // once we complete one side sorting we add rest elements as it is
        B[k++] = arr[i]; //adding element left in 0 to mid arr
        for(; j<=r; j++) //adding elements left in mid+1 to right(n)
        B[k++] = arr[j];
        for(int i=l; i<=r; i++) //copying yo main arr
         arr[i]=B[i];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
         if(l>=r) return;
       int mid =(l+r)/2;   //find mid 
       mergeSort(arr,l,mid); // keep breaking array till mid
       mergeSort(arr,mid+1,r); // keep breaking arr from mid+1 to right
       merge(arr,l,mid,r);   //merege by comparing elements 
    }