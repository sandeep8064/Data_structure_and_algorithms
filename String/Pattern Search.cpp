bool search(string pat, string txt) 
    { 
        int j = 0;
    	for(int i  = 0; i< txt.length(); i++)
    	{
    	    if(txt[i] == pat[j])
    	    {
    	        j++;
    	    }
    	    else{
    	        j = 0;
    	    }
    	    if(j == pat.length())
    	        return true;
    	}
    	return false;
}


Another way -> Sliding Window  

bool search(string pat, string txt, int q) 
{ 
	int m=txt.length();
    int n=pat.length();
    for(int i=0;i<m-n+1;i++) {
        string r = txt.substr(i,n);  //generate an substring from index to size of pattern
        if(r == pat) {
            return true;
        }
    }
    return false; 
} 