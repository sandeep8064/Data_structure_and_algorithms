 char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> m;
        for(int i=0;i<str.size();i++)
        {
            m[str[i]]++;
        }
        int max=0;
        char ans;
        for(auto i : m)
        {
            if(i.second>max)
            {   
               max=i.second;    
               ans = i.first;
               
            }
        }
        
        return ans;
    }