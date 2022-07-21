 int modified (string a)
    {
        int count=0,ans=0;
       for(int i=0;i<a.length()-1;i++)
       {
           if(a.at(i)==a.at(i+1)&&(count==0))  //element occured two times
           {
               count++;
           }
           else if(a.at(i)==a.at(i+1)&&count==1) //element occured three times since count =1
           {
               ans++;
               count=0;
           }
           else
           {
               count=0;
           }
       }
       return ans;
    }