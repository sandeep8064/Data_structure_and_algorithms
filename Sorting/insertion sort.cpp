void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=1;i<n;i++)  // we take cur ele and check with prev elements if any larger ele
        {                     //is present than we move large element ahead by 1
            int temp = arr[i];  //we will overite so we need to preserve cur element
            int j=i-1;          // we will traverse array in backward to find any large ele
            while(j>=0 && arr[j]>temp) // j cannot go beyond 0 and we check if prev ele is 
            {                          //greater than current if yes we move it ahead by 1
                arr[j+1]=arr[j];
                j--;                   //moving to next element in backward
            }
            
            arr[j+1]=temp;    //now after shiting we will fill the vacant(due to overwritten)
                              // with temp;
        }
        
    }
