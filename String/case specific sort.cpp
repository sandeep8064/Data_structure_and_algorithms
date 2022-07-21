string caseSort(string str, int n)
    {
        string lower;
        string upper;
        
        for(int i=0;i<n;i++)
        {  
            if(islower(str[i]))
            {
                lower.push_back(str[i]);
            }
            else
            {
                upper.push_back(str[i]);
            }
        }
        
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        string res;
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
              if(islower(str[i]))
              {
                  res.push_back(lower[j]);
                  j++;
              }
              else
              {
                res.push_back(upper[k]);
                k++;
              }
        }
        
        
        return res;
    }