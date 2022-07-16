#include<iostream>
using namespace std;

void replacech(char str[],char c1,char c2)
{
 for(int i=0;str[i]!='\0';i++)
 {
    if(str[i]==c1)
    str[i]=c2;
 }
 cout<<str;
}

int main()
{
    int n=1e6;
    char str[n];
    cin>>str;
    char c1,c2;
    cin>>c1>>c2;
    replacech(str,c1,c2);
}