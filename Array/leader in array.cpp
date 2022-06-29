vector<int> leaders(int a[], int n){
        // Code here
       vector<int> v;
       int l = a[n-1];
     
       for(int i=n-1;i>=0;i--)
       {
           if(a[i]>=l)
           {
               l=a[i];
               v.push_back(l);
           }
       }
       reverse(v.begin(),v.end());
       return v;
        
    }