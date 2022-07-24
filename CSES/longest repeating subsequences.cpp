void solution()
{

 string s;
 cin>>s;
 int max = 0;
  int count=1;
 for(int i=0;i<s.size()-1;i++)
 {
   
    if(s[i]==s[i+1])
    {
    	count++;
    }else
    count=1;

    if(count>max)
    max=count;
    
 }

 cout<<max<<endl;

}