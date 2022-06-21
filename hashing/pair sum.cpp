
 int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x = k-arr[i];
            if(m.find(x)!=m.end())
            {
                count+=m[x];
            }
            
            m[arr[i]]++;
        }
        
        
        return count;
    }
