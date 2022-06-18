 vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
       unordered_map<int,int>um;
        vector<int>v;
        for(int i=0;i<k;i++){
            um[A[i]]++;
        }
        v.push_back(um.size());
        int j=0;
        for(int i=k;i<n;i++){     //to slide window increase 1 ele and delete 1 i.e 
            um[A[j]]--;           //increase or descrese frequency
            um[A[i]]++;
            if(um[A[j]]==0){      //if freq become zero remove from map
                um.erase(A[j]);
            }
            j++;
            v.push_back(um.size());
        }
        
        return v;
    }