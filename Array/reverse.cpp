        
 
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        int start=0;
        int end = n-1;
      
      while(start<end){
          int temp = arr[start];
          arr[start]=arr[end];
          arr[end]= temp;
          start++;
          end--;
      }
        
    }


