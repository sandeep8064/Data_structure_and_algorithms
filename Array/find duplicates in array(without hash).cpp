   vector<int> v;
       for(int i=0;i<n;i++)
       {
           arr[arr[i]%n]= arr[arr[i]%n]+n;
       }
       
       for(int i=0;i<n;i++)
       {
           if(arr[i]/n>1)
           {
               v.push_back(i);
           }
       }
       
       if(v.size())
       return v;
       else
       return {-1};
    }