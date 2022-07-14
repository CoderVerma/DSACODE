#include<iostream>
using namespace std;
int duplicate(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    // bool flag=true;

    for(int j=0;j<n;j++)
    {
        if(i==j)
        continue;

        else if(a[i]==a[j])
        {
            return a[i];
        }
    }

    // if(flag)
    // return a[i];
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
    cout<<duplicate(a,n);
}