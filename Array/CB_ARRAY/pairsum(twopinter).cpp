#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int key;
cin>>key;

int i=0,j=sizeof(a)/sizeof(int)-1;
while(i<j)
{
    int cs=a[i]+a[j];
    if(cs>key)
    j--;
    else if(cs<key)
    i++;
    else if(cs==key)
    {cout<<a[i]<<"and"<<a[j]<<endl;
    i++;j--;}
}
}