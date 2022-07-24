string removeDups(string S) 
	{
	    // Your code goes here
	   for(int i=0; i<S.size(); i++){
        for(int j=i+1; j<S.size(); j++){
            if(S[j]==S[i]){
                S.erase(j,1);  //delete one character from index j i.e j itself
                j--;
            }
        }
    }
    return S;
	    
	}