 void binSort(int arr[], int N)
    {
       //Your code here
       int count=0;
       for(int i=0;i<N;i++)
       {
           if(arr[i]==0)
           {
               swap(arr[i],arr[count]);
               count++;
           }
       }
    }
//count = number of zero index in begining