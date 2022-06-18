int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        
        set<int> s(a,a+n);
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(s.find(b[i])!=s.end())
            {
                count++;
                s.erase(b[i]);     //remove element from set as array may contain duplicate ele
            }
        }
        
        return count;
    }