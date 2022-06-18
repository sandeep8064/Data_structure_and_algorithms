bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
          map<int,int> mp1;
      for(int i = 0;i<N;i++)
      {
          mp1[A[i]]++;
          mp1[B[i]]--;
      }
      for(auto x : mp1)
      {
          if(x.second != 0)
             return false;
      }
      return true;
      
   }