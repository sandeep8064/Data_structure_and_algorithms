 ll findSubarray(vector<ll> arr, int n ) {
        //code here
        unordered_map<int,int> m;
        int count=0;
        int sum=0;
        m[0]=1;        //{0,1}
        for(int i=0;i<n;i++)
        {  
            sum+=arr[i];    
            
           
            
            if(m.find(sum)!=m.end())  //find repeating ele and add their frequencies
            {
                count+=m[sum];
            }
            
            m[sum]++;     //update the frequency of current element even it is repeating
            
        }
        
        return count;
    }