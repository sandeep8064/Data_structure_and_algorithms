nt strstr(string s, string x)
{
     //Your code here
     

     for(int i=0;i<s.size();i++)
     {  
         string sub = s.substr(i,x.size());//return a substring
         
         if(sub==x)
         return i;
        
     }
     
     return -1;
}