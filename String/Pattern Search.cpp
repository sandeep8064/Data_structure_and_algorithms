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