string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_set<int> s(a1,a1+n);
    for(int i=0;i<m;i++)
    {
        if(s.find(a2[i])==s.end())
        {
            return "No";
        }
    }
    
    return "Yes";
}