bool validate(string s)
{
   //Your code here
   bool flag= false;
   if(s.length()<10)return false;
   for(char a:s){if(a<='9' && a>='0'){flag = true;break;}}
   if(flag == false)return false;
   flag =false;
   for(char a:s){if(a>='A' && a<='Z'){flag = true;break;}}
   if(flag == false)return false;
   flag = false;
   for(char a:s){if(a>='a' && a<='z'){flag = true;break;}}
   if(flag == false)return false;
   flag = false;
   for(char a:s){if(a=='@' || a<='#' || a<='$' || a<='-' || a<='*'){flag = true;break;}}
   if(flag == false)return false;
   return true;
}