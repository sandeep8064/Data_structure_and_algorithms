void printNos(int N)
    {
        //Your code here
        if(N==0)
        {
         return ;
        }
        
        printNos(N-1); //just move cout above rec call to print in reverse order
        cout<<N<<" "; 
    }