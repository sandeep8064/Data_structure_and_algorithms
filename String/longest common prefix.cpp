  string longestCommonPrefix (string arr[], int N)
    {
          sort(arr,arr+N);
          string s1= arr[0];  //we will check first and last word of array char by char 
          string s2= arr[N-1]; // and find  longest common substring 
          int i=0;
          int j=0;
          string res;
          while(i<s1.size() && j<s2.size())
          {
              if(s1[i]==s2[i])  //comr char by char till same 
              {
                  res.push_back(s1[i]);
              }
              else
              break;
              
              i++;
              j++;
          }
          
          if(res.size()==0)
           return "-1";
           else
           return res;
    }