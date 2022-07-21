 string missingPanagram(string s){
    
     int a[26]={0};
        for(int i=0;i<s.length();i++){   //if we do s[i]-'a' we get index eg 
            if(s[i]>='A' && s[i]<='Z')   // a-a=0 b-a=1 c-a = 2 so if index remain 
                a[s[i]-'A']++;           // 0 then char is missing 
            else if(s[i]>='a' && s[i]<='z')
                a[s[i]-'a']++;
        }
        string ans="";
        for(int i=0;i<26;i++)   // we simply add a to index to get missing value
            if(a[i]==0)
                ans+=(i+'a');  //suppose b is missing 1+a = 1+65 = 66 which give b
        if(ans=="")
            return "-1";
        return ans;
        
    }