 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        int sum=1;
     int counter=1;
     sort(arr,arr+N);
         
         for(int i=1;i<N;i++){
         if(arr[i-1]==arr[i])
{
   continue;
}
             if(arr[i-1]+1==arr[i]  ){
                 counter++;
               sum=max(sum,counter);
               
             }

 

             else{
                counter=1;
             }
             
             
         }
         return sum;
     }