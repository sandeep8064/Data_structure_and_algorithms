

int print2largest(int arr[], int n) {
	    // code here
	    int l=arr[0],l2=0;
	    for(int i=0;i<n;i++)
	    {
	       if(arr[i]>l)
	       {   
	           l2=l;
	           l=arr[i];
	          
	       }
	       else
	       {
	           if(arr[i]>l2 && arr[i]<l)//check if array greater than second largest and 
	           {                        // less than largest
	               l2=arr[i];
	           }
	       }
	    }
	    
	   
	    
	    if(l2==0)
	    return -1;
	    else
	    return l2;
	}


