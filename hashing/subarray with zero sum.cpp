 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> m;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum +=arr[i];
            m[sum]++;
            
       if(m[sum]>1 || sum==0)  //if sum=0 then there exist array with zerp sum
        {                      //if freq >1 means we have ecountered same sum previously
            return true;       //meaning there is an array with zero sum
        }
        }
        
        return false;
    }