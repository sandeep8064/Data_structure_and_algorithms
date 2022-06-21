 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> v;
        deque<int> dq;
        
        for(int i=0;i<n;i++)
        {    
            if(!dq.empty() && dq.front() == i-k) // to remove items not in window
                 dq.pop_front();
                 
            while(!dq.empty()&& arr[dq.back()]<=arr[i])  //to remove small element as we want      
                          dq.pop_back();               //as we want to maintain decresing order
        
                dq.push_back(i);
                
             if(i>=k-1)
             v.push_back(arr[dq.front()]);   //return largest element after k iteration
                
        
        }                                       
        
        
        return v;
    }