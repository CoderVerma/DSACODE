#include<iostream>
#include<climits>
using namespace std;
int cntpair(int a[],int n,int key)
{
    int cnt=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
        if(a[i]+a[j]==key)
        {
            cnt++;
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
    cout<<cntpair(a,n,key);
}

