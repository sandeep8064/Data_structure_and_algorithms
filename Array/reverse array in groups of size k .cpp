void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
     
      for(int i=0;i<n;i=i+k)  //taking a window of k , eg = 0+3 =3
      {
          if(i+k>=n)  //if any time our i+k become greater than arr size we use n instead of i+k
          reverse(arr.begin()+i,arr.begin()+n);
          else
          reverse(arr.begin()+i,arr.begin()+i+k);
      }
        
    }