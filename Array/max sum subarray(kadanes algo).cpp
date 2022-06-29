long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_sum=INT_MIN;
        int cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum+=arr[i];
            
            if(cursum>max_sum)
            {
                max_sum=cursum;
            }
            
            if(cursum<0)   //if our sum gives negative we discard sum and reset to zero
            {
            cursum=0;
            }
        }
        
        return max_sum;
        
        
    }