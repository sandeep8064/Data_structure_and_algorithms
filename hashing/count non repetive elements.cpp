int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> m;
       
       int count=0;
       for(int i=0;i<n;i++)
       {
           m[arr[i]]++;
           
       }
       
      
       for(auto i : m)
       {
           if(i.second==1)
           {
               count++;
           }
       }
       
       return count;
    }