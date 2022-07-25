void reverse(string &str,int start,int end)
{
    int st=start,en=end;
  if(st>=en)
  return;
  int temp=str[st];
  str[st]=str[en];
  str[en]=temp;
  reverse(str,st+1,en-1);
}

string reverseWord(string str){
    
  //Your code here
  reverse(str,0,str.size()-1);
  
  return str;
  
}