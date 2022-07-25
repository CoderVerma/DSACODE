string reverseWord(string str){
    
  //Your code here
  int st=0,en=str.size()-1;
  while(st<en)
  {int temp=str[st];
  str[st]=str[en];
  str[en]=temp;
  en--;st++;
  }
  return str;
}