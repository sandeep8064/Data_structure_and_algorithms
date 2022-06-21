int MissingNumber(vector<int>& arr, int n) {
        // Your code goes here
        
        /* int zor=0;   //xor cancel repeating element so we left with missing number
        for(int x:arr)
            zor=zor^x;
        for(int i=1;i<=n;i++)  // natural numbers
            zor=zor^i;
        return zor; */
        
        int sum = (n*(n+1))/2;  //sum of n natural number
        int arsum=0;            //sum of array
        for(auto i : arr)
        {
            arsum+=i;
        }
        
        return sum-arsum;  //natural sum - arr sum = missinge number
    } 			