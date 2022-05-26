string reverseWord(string str){
    
  //Your code here
  int start =0;
  int end  = str.size()-1;
  for(int i=0;i<=end;i++)
  {
     swap(str[start],str[end]);
     start++;
     end--;
  }
  
  return str;
}