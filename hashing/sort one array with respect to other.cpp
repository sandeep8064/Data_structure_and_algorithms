  vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
       vector<int> res;
        map<int,int>map;
        for(int i = 0; i < N ;i++)
        {
            map[A1[i]]++;
        }
        
        for(int i = 0;i < M;i++)
        {
            if(map.find(A2[i])!=map.end())
            {
               while(map[A2[i]] != 0)  //while frequency is not zero we will add ele to vector
               {                       // and reduce frequency after each iteratiopn
                 res.push_back(A2[i]);
                 map[A2[i]]--;
               }
               map.erase(A2[i]);    //one freq become zero remove item
            }
        }
        for(auto itr=map.begin(); itr!= map.end();itr++) //loop for elements which are not 
        {                                                // present in second loop
             while(itr->second != 0)
             {
                 res.push_back(itr->first);
                 (itr->second)--;
             }
        }
        return res;
    } 