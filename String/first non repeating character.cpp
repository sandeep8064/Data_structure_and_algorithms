char nonrepeatingCharacter(string S)
   {
      
      map<char,int>m;
     for(int i=0; i<S.length(); i++)
     {
         m[S[i]]++;
     }
     for(int i=0; i<S.length(); i++)
     {
         if(m[S[i]]<2)
         {
             return S[i];
             
         }
     }
     return '$';
   
      
   }