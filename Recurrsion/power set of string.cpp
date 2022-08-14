void sol(int ind, string s,string str, vector<string> &ans)
{
    if(ind==s.size())
    {
        ans.push_back(str);
        str.clear();
        return;
    }
    
    sol(ind+1,s,str+s[ind],ans); //include current index element from string
    sol(ind+1,s,str,ans); //not inclide cur index element 
}


vector <string> powerSet(string s)
{
   //Your code here
   vector<string> ans;
   string str ="";
   sol(0,s,str,ans);
   return ans;
   
}