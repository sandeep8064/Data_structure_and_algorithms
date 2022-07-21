 bool isSubSequence(string A, string B)
    {
        //code here
        int count=0;
        int j=0;
        for(int i=0;i<B.size();i++)
        {
            if(A[j]==B[i])
            {
                count++;
                j++;
            }
            
            if(count==A.size())
            {
                return true;
            }
        }
        
        return false;
    }