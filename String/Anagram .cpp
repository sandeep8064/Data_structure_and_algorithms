bool isAnagram(string a, string b){
        
        
         sort(a.begin(), a.end());
         sort(b.begin(), b.end());
   
          if(a == b)
          return true;
           
          else
          return false;
    
            
        // //Using hashing
        // if(a.length()!=b.length()) return false; 
        // unordered_map<char,int> m ;
        // for(int i=0 ; i<a.length() ; i++)
        //     m[a[i]]++ ;
        // for(int i=0 ; i<b.length() ; i++)
        //     m[b[i]]-- ;
        // for(auto it : m)
        //     if(it.second!=0) return false ;  // Loop over all keys and check if all keys are 0.
                                                // If so it means it is anagram.
            
        // return true ;
    }    