 bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size())
        return 0;
        string s = s1+s1; //to include rotated patterns 
        if(s.find(s2)!= -1) //if we find find will give -1
        {
            return 1;
        }
        return false;
    }