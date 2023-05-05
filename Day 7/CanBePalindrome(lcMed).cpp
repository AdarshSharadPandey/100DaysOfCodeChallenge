boolean canBecomePalindrome(String str)
{
  int low=0,high=str.size()-1,flag=0;
  while(low<high)
  {
   if(str[low]==str[high]){
    low++,high—-;
   }
   else if(str[low]!=str[high] && str[low]==str[high-1])
   {
    str.erase(str.begin()+high);
    flag=1;
   }
   else if(str[low]!=str[high] && str[low+1]==str[high])
   {
    str.erase(str.begin()+low);
    flag=1;
   }
   else 
   {
    str[low]=str[high];
    flag=1;
   }
   if(flag=1)return checkPalindrome(str);
  }
  return true;
}
