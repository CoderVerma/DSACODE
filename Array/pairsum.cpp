#include<iostream>
#include<climits>
using namespace std;
int cnttriplet(int a[],int n,int key)
{
    int cnt=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[i]+a[j]+a[k]==key)
        {
            cnt++;
        }
        }
    }
  }
  return cnt;  
}
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
    cout<<cnttriplet(a,n,key);
}

