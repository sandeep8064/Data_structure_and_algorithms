 string concatenatedString(string s1, string s2) 
    { 
        // Your code here
       
        string t;
        
         for(int i=0;i<s1.size();i++)
        {  
            char v = s1[i];
            if(s2.find(v) == -1)
            {
                t.push_back(v);
                
            }
        }
        
        for(int i=0;i<s2.size();i++)
        {  
            char v = s2[i];
            if(s1.find(v) == -1)
            {
                t.push_back(v);
                
            }
        }
        
        if(t.size()==0){
            return "-1";
        }
       else
       return t;
    }