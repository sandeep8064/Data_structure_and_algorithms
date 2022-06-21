 vector <int> findPairs(int arr[], int n) 
    {
        // code here
        unordered_map<int,int> m;
        vector<int> v;
      for(int i=0;i<n;i++)
      {
         int x = abs(arr[i]);
         if(m.find(x)!=m.end())
         {
             v.push_back(-x);
             v.push_back(x);
             
         }
        m[x]++;
      }
      
      return v;
    }