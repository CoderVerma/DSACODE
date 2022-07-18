#include<iostream>
#include<cstring>
using namespace std;

char highestocc(char a[])
{
 int freq[256]={0};
 for(int i=0;a[i]!='\0';i++)
 {
    freq[(int)a[i]]+=1;
 }
 char ans=a[0];
 int cnt=freq[(int)a[0]];
 for(int i=1;a[i]!='\0';i++)
 {
    int occur=freq[(int)a[i]];
    if(occur>cnt)
    {
        ans=a[i];
        cnt=occur;
    }
 }
 return ans;
 }
int main()
{
    int n=1e6;
    char str[n];
    cin>>str;
    
    cout<<highestocc(str);
}