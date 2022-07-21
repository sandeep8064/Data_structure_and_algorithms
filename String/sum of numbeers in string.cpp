int findSum(string str)
    {
    	
    	// Your code here
    	
    	int sum=0;
    	int num=0;
    	for(int i=0;i<str.size();i++)
    	{
    	    if(str[i]>='0' && str[i]<='9')
    	    {						// str[i]-'0' will automatically convert char to int we dont have to use (int) explicitally
    	       num=num*10+(str[i]-'0'); //we need to check number till we encounter a char 
    	    }                          //eg 23  num= 0*10+2 =2
    	    else                       //   next it  num = 2*10+3 = 23 now we enconter alphabet so num 
    	    {                        //num becomes null and we add 23 to sum
    	     sum+=num;
    	     num=0;
    	    }
    	}
    	
    	return sum+num;
    }