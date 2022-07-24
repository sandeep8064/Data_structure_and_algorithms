 vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(auto i:m)
        {
            if(i.second>1)
            v.push_back(i.first);
        }
        
       if(v.size())
       {   sort(v.begin(),v.end());
           return v;
       }
       else
        return {-1};
    }