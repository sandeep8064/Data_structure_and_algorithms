  vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        unordered_map<int,int>ump;
       vector<int>v;
       for(auto i:v1) 
        ump[i]++;
       for(auto i:v2)
       {
           if(ump.find(i)!=ump.end())
           {   if(ump[i]!=0)
               {    v.push_back(i);
                      ump[i]--;
               }
               
           }
       }
       sort(v.begin() , v.end());

       
       return v;
   }