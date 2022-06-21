
 int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> m;
        int cursum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cursum+=arr[i];
            
            if(cursum == sum) count++;
            
            if(m.find(cursum-sum)!=m.end())  //if an element cursum - sum exist add its freq
            {                                //to count variable
                count+=m[cursum-sum];       
            }
            
            m[cursum]++;                    //if cursum-sum doesnt exist add cursum to map
        }
        
        return count;
    }
