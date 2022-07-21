bool isIsogram(string s)
    {
        unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        for(auto i : m)
        {
            if(i.second>1)
             return false;
        }
        
        return true;
    }