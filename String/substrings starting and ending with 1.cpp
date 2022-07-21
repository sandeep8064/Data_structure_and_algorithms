 long binarySubstring(int n, string a){
        
        // Your code here
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1')
            count++;
        }
        
        return count*(count-1)/2;
    }