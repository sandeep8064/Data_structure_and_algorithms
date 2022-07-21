 int minIndexChar(string str, string patt)
    {
        // Your code here
        unordered_set<char> s(patt.begin(),patt.end());
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            char v = str[i];
            if(s.find(v)!=s.end())
            {
                return i;
            }
        }
        
        return -1;
    }