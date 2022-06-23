vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        int left=0;
        int right=0;
        long long sum=0;
       while(left<n)      //we take two pointer from zero//
                         //while our sum is less than target sum we increase left and if our 
        {                 // sum become greater than target then we start subtracting element
           if(sum==s)   //from left side until it again become smaller than target 
            {           //after getting smaller it again start adding from right side
                v.push_back(left+1);
                v.push_back(right);
                return v;
            }
            if(sum<s)
            {
                sum+=arr[right];
                right++;
            }
            else 
            {
                sum-=arr[left];
                left++;
            }
        }
        
        return {-1};
    }