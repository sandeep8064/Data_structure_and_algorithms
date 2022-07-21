 bool areIsomorphic(string str1, string str2)
    {
        
       if(str1.length()!=str2.length())
       return 0;
       int n=str1.length();
       map<char,char >m1;
       map<char,char >m2;
       for(int i=0;i<n;i++)
       {
           if(m1[str1[i]]==0&&m2[str2[i]]==0)  // we will assign a value only if that character 
           {                                // is unused else we wont use if repeating 
               m1[str1[i]]=str2[i];       // m1 -> (a,x)(b,y)
               m2[str2[i]]=str1[i];      // m2 -> (x,a) (y,b)
           }
           if(m1[str1[i]]!=str2[i]||m2[str2[i]]!=str1[i]) //we check if a=x i.e
           return 0;       // m.second == str2[i] 
       }
       
       return 1;
       
    }