int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> p;
        
        for(int i=0;i<r+1;i++)
        {
            p.push(arr[i]);
            
            if(p.size()>k)
             p.pop();
        }
        
        return p.top();
    }