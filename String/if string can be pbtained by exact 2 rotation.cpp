//Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
   {
       string s = str1 + str1;  //amazonamazon if first occurence of str2 occurs
       string r = str2 + str2;  //at index 2 then str can be obtained
       if(s.find(str2) == 2) {
           return true;
       }
       if(r.find(str1) == 2) {
           return true;
       }
       return false;
   }