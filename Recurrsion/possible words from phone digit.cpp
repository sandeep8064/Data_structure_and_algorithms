 vector<string> s = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void sol(int a[],int n, string temp, int i)
    {
    
    if(i==n)
    {
        ans.push_back(temp);
        return;
    }
    
    for(int j=0;j<s[a[i]].size();j++)
       sol(a,n,temp+s[a[i]][j],i+1);
    
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        sol(a,N,"",0);
        return ans;
    }