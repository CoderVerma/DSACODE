#include<iostream>
using namespace std;
int unique(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    bool flag=true;

    for(int j=0;j<n;j++)
    {
        if(i==j)
        continue;

        else if(a[i]==a[j])
        {
            flag=false;
            break;
        }
    }

    if(flag)
    return a[i];
  }
  return -1;    
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
    cout<<unique(a,n);
}